/*                                                                              
Copyright 2021 Wolfgang Schwotzer

Redistribution and use in source and binary forms, with or without modification,are permitted provided that the following conditions are met:

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

#include <gtest/gtest.h>
#include <primes.h>


class primes_wrapper : public primes
{
public:
    primes_wrapper(uint64_t number = 0U) : primes(number)
    {
    }

    uint64_t get_isqrt(uint64_t number)
    {
        return isqrt(number);
    }
};

TEST(isqrt_test, isqrt)
{
    auto pw = primes_wrapper();

    EXPECT_EQ(1, pw.get_isqrt(3));

    EXPECT_EQ(2, pw.get_isqrt(4));
    EXPECT_EQ(2, pw.get_isqrt(5));
    EXPECT_EQ(2, pw.get_isqrt(6));
    EXPECT_EQ(2, pw.get_isqrt(7));
    EXPECT_EQ(2, pw.get_isqrt(8));

    EXPECT_EQ(3, pw.get_isqrt(9));
    EXPECT_EQ(3, pw.get_isqrt(10));
    EXPECT_EQ(3, pw.get_isqrt(11));
    EXPECT_EQ(3, pw.get_isqrt(12));
    EXPECT_EQ(3, pw.get_isqrt(13));
    EXPECT_EQ(3, pw.get_isqrt(14));
    EXPECT_EQ(3, pw.get_isqrt(15));

    EXPECT_EQ(4, pw.get_isqrt(16));
    EXPECT_EQ(4, pw.get_isqrt(24));

    EXPECT_EQ(5, pw.get_isqrt(25));
    EXPECT_EQ(5, pw.get_isqrt(35));

    EXPECT_EQ(6, pw.get_isqrt(36));
    EXPECT_EQ(6, pw.get_isqrt(48));

    EXPECT_EQ(7, pw.get_isqrt(49));
    EXPECT_EQ(7, pw.get_isqrt(63));

    EXPECT_EQ(8, pw.get_isqrt(64));
    EXPECT_EQ(8, pw.get_isqrt(80));

    EXPECT_EQ(9, pw.get_isqrt(81));
    EXPECT_EQ(9, pw.get_isqrt(99));

    EXPECT_EQ(10, pw.get_isqrt(100));
    EXPECT_EQ(10, pw.get_isqrt(120));

    EXPECT_EQ(126, pw.get_isqrt(16127));
    EXPECT_EQ(1022, pw.get_isqrt(1046527));
    EXPECT_EQ(4094, pw.get_isqrt(16769023));
    EXPECT_EQ(32766, pw.get_isqrt(1073676287));
    EXPECT_EQ(262142, pw.get_isqrt(68718952447));
    EXPECT_EQ(524286, pw.get_isqrt(274876858367));
    EXPECT_EQ(2097150, pw.get_isqrt(4398042316799));
    EXPECT_EQ(33554430, pw.get_isqrt(1125899839733759));
    EXPECT_EQ(134217726, pw.get_isqrt(18014398241046527));
    EXPECT_EQ(1054092553, pw.get_isqrt(1111111111111111111));
}

