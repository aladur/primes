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
#include <chrono>

const uint64_t cache_size_small = 10000;
const uint64_t cache_size_large = 10000000;

namespace
{
    class primes_test : public testing::Test
    {
    protected:
        static void SetUpTestSuite()
        {
            auto start = std::chrono::steady_clock::now();

            pc0 = new primes();
            pcs = new primes(cache_size_small);
            pcl = new primes(cache_size_large);

            auto end = std::chrono::steady_clock::now();
        }

        static void TearDownTestSuite()
        {
            delete pcl;
            pcl = nullptr;
            delete pcs;
            pcs = nullptr;
            delete pc0;
            pc0 = nullptr;
        }

        static primes *pc0; // primes with no (zero) cache
        static primes *pcs; // primes with small cache
        static primes *pcl; // primes with large cache
    };
};

