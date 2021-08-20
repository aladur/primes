/*
Copyright 2021 Wolfgang Schwotzer

Redistribution and use in source and binary forms, with or without modification,
are permitted provided that the following conditions are met:

1. Redistributions of source code must retain the above copyright notice, this
list of conditions and the following disclaimer.

2. Redistributions in binary form must reproduce the above copyright notice,
this list of conditions and the following disclaimer in the documentation
and/or other materials provided with the distribution.

3. Neither the name of the copyright holder nor the names of its contributors
may be used to endorse or promote products derived from this software without
specific prior written permission.

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE
FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
*/

#include <primes.h>
#include <cmath>


primes::primes(uint64_t p_cache_size)
    : cache_size(p_cache_size / 3U + (p_cache_size % 3U ? 1 : 0))
    , primes_cache(cache_size, true)
{
    initialize_cache();
}

void primes::initialize_cache()
{
    if (cache_size == 0U)
    {
        return;
    }

    primes_cache.at(1U / 3U) = false;

    uint32_t num_inc = 4U;
    auto limit = cache_size * 3U;
    for (uint64_t number = 5U; number < limit; number += num_inc)
    {
        if (primes_cache.at(number / 3U))
        {
            // number is prime. Mark all multiples as not prime.
            // skip all multiples which are dividable by 2 or 3.
            uint16_t shift = 2U;
            for (uint64_t n = 5U * number; n < limit; n += (number << shift))
            {
                primes_cache.at(n / 3U) = false;
                shift = (shift & 1U) ? 2U : 1U;
            }
        }
        num_inc = (num_inc == 2U) ? num_inc << 1 : num_inc >> 1;
    }
}

std::vector<uint64_t> primes::get_cached_primes(
    uint64_t begin, uint64_t end) const
{
    std::vector<uint64_t> result;

    if (begin >= end || begin >= cache_size * 3)
    {
        return result;
    }

    end = std::min(end, cache_size * 3);

    double d_begin = 0.0;
    if (begin >= 2U)
    {
        d_begin = static_cast<double>(begin) /
                 std::log(static_cast<double>(begin));
    }
    auto d_end = static_cast<double>(end) / std::log(static_cast<double>(end));
    auto size = static_cast<uint64_t>(d_end - d_begin);
    result.reserve(size);

    if (begin <= 2U)
    {
        result.push_back(2U);
    }
    if (begin <= 3U)
    {
        result.push_back(3U);
    }

    while (begin % 2U == 0 || begin % 3U == 0)
    {
        ++begin;
    }

    uint32_t num_inc = ((begin % 6U) == 1) ? 2U : 4U;
    for (uint64_t number = begin; number < end; number += num_inc)
    {
        if (primes_cache.at(number / 3U))
        {
            result.push_back(number);
        }

        num_inc = (num_inc == 2U) ? num_inc << 1 : num_inc >> 1;
    }

    return result;
}

bool primes::s_is_prime(uint64_t number)
{
    // static function does not have access to the primes cache.
    // Instead make a trial division test with all 6*x + 1, 6*x + 5
    // up to including the square root of number.
    if ((number <= 1U) || (number % 2U == 0U) || (number % 3U == 0U))
    {
        return number == 2U || number == 3U;
    }

    uint32_t num_inc = 4U;
    for (uint64_t dividend = 5; dividend <= isqrt(number); dividend += num_inc)
    {
        if (number % dividend == 0U)
        {
            return false;
        }
        num_inc = (num_inc == 2U) ? num_inc << 1 : num_inc >> 1;
    }

    return true;
}

bool primes::is_prime(uint64_t number) const
{
    if (number <= 1U || (number % 2U == 0U) || (number % 3U == 0U))
    {
        // Number can be divided by 2 or 3 => not prime, except for 2 or 3.
        return number == 2U || number == 3U;
    }

    if (number < cache_size * 3U)
    {
        // If result in cache return it.
        return primes_cache.at(number / 3U);
    }

    uint32_t num_inc = 4U;
    uint64_t dividend = 5U;
    auto sqrt = primes::isqrt(number);

    // As far as available use the primes cache for division tests.
    if (cache_size > 0U)
    {
        auto limit = std::min(sqrt, (cache_size * 3U) - 1);
        for (; dividend <= limit; dividend += num_inc)
        {
            if (primes_cache.at(dividend / 3U))
            {
                if (number % dividend == 0U)
                {
                    return false;
                }
            }
            num_inc = (num_inc == 2U) ? num_inc << 1 : num_inc >> 1;
        }
        if (limit == sqrt && dividend > sqrt)
        {
            return true;
        }
    }

    // For dividends outside of cache calculate from scratch.
    for (; dividend <= sqrt; dividend += num_inc)
    {
        if (number % dividend == 0U)
        {
            return false;
        }
        num_inc = (num_inc == 2U) ? num_inc << 1 : num_inc >> 1;
    }

    return true;
}

uint64_t primes::isqrt(uint64_t number)
{
    uint64_t x0 = number >> 1;

    if (x0)
    {
        uint64_t x1 = (x0 + number / x0) >> 1;
        while (x1 < x0)
        {
            x0 = x1;
            x1 = (x0 + number / x0) >> 1;
        }

        return x0;
    }

    return number;
}

