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
#include "fixture.h"


primes *primes_test::pc0 = nullptr;
primes *primes_test::pcs = nullptr;
primes *primes_test::pcl = nullptr;

TEST_F(primes_test, s_is_prime_0_100)
{
    auto &p = *pc0;

    EXPECT_FALSE(p.s_is_prime(0));
    EXPECT_FALSE(p.s_is_prime(1));
    EXPECT_TRUE(p.s_is_prime(2));
    EXPECT_TRUE(p.s_is_prime(3));
    EXPECT_FALSE(p.s_is_prime(4));
    EXPECT_TRUE(p.s_is_prime(5));
    EXPECT_FALSE(p.s_is_prime(6));
    EXPECT_TRUE(p.s_is_prime(7));
    EXPECT_FALSE(p.s_is_prime(8));
    EXPECT_FALSE(p.s_is_prime(9));

    EXPECT_FALSE(p.s_is_prime(10));
    EXPECT_TRUE(p.s_is_prime(11));
    EXPECT_FALSE(p.s_is_prime(12));
    EXPECT_TRUE(p.s_is_prime(13));
    EXPECT_FALSE(p.s_is_prime(14));
    EXPECT_FALSE(p.s_is_prime(15));
    EXPECT_FALSE(p.s_is_prime(16));
    EXPECT_TRUE(p.s_is_prime(17));
    EXPECT_FALSE(p.s_is_prime(18));
    EXPECT_TRUE(p.s_is_prime(19));

    EXPECT_FALSE(p.s_is_prime(20));
    EXPECT_FALSE(p.s_is_prime(21));
    EXPECT_FALSE(p.s_is_prime(22));
    EXPECT_TRUE(p.s_is_prime(23));
    EXPECT_FALSE(p.s_is_prime(24));
    EXPECT_FALSE(p.s_is_prime(25));
    EXPECT_FALSE(p.s_is_prime(26));
    EXPECT_FALSE(p.s_is_prime(27));
    EXPECT_FALSE(p.s_is_prime(28));
    EXPECT_TRUE(p.s_is_prime(29));

    EXPECT_FALSE(p.s_is_prime(30));
    EXPECT_TRUE(p.s_is_prime(31));
    EXPECT_FALSE(p.s_is_prime(32));
    EXPECT_FALSE(p.s_is_prime(33));
    EXPECT_FALSE(p.s_is_prime(34));
    EXPECT_FALSE(p.s_is_prime(35));
    EXPECT_FALSE(p.s_is_prime(36));
    EXPECT_TRUE(p.s_is_prime(37));
    EXPECT_FALSE(p.s_is_prime(38));
    EXPECT_FALSE(p.s_is_prime(39));

    EXPECT_FALSE(p.s_is_prime(40));
    EXPECT_TRUE(p.s_is_prime(41));
    EXPECT_FALSE(p.s_is_prime(42));
    EXPECT_TRUE(p.s_is_prime(43));
    EXPECT_FALSE(p.s_is_prime(44));
    EXPECT_FALSE(p.s_is_prime(45));
    EXPECT_FALSE(p.s_is_prime(46));
    EXPECT_TRUE(p.s_is_prime(47));
    EXPECT_FALSE(p.s_is_prime(48));
    EXPECT_FALSE(p.s_is_prime(49));

    EXPECT_FALSE(p.s_is_prime(50));
    EXPECT_FALSE(p.s_is_prime(51));
    EXPECT_FALSE(p.s_is_prime(52));
    EXPECT_TRUE(p.s_is_prime(53));
    EXPECT_FALSE(p.s_is_prime(54));
    EXPECT_FALSE(p.s_is_prime(55));
    EXPECT_FALSE(p.s_is_prime(56));
    EXPECT_FALSE(p.s_is_prime(57));
    EXPECT_FALSE(p.s_is_prime(58));
    EXPECT_TRUE(p.s_is_prime(59));

    EXPECT_FALSE(p.s_is_prime(60));
    EXPECT_TRUE(p.s_is_prime(61));
    EXPECT_FALSE(p.s_is_prime(62));
    EXPECT_FALSE(p.s_is_prime(63));
    EXPECT_FALSE(p.s_is_prime(64));
    EXPECT_FALSE(p.s_is_prime(65));
    EXPECT_FALSE(p.s_is_prime(66));
    EXPECT_TRUE(p.s_is_prime(67));
    EXPECT_FALSE(p.s_is_prime(68));
    EXPECT_FALSE(p.s_is_prime(69));

    EXPECT_FALSE(p.s_is_prime(70));
    EXPECT_TRUE(p.s_is_prime(71));
    EXPECT_FALSE(p.s_is_prime(72));
    EXPECT_TRUE(p.s_is_prime(73));
    EXPECT_FALSE(p.s_is_prime(74));
    EXPECT_FALSE(p.s_is_prime(75));
    EXPECT_FALSE(p.s_is_prime(76));
    EXPECT_FALSE(p.s_is_prime(77));
    EXPECT_FALSE(p.s_is_prime(78));
    EXPECT_TRUE(p.s_is_prime(79));

    EXPECT_FALSE(p.s_is_prime(80));
    EXPECT_FALSE(p.s_is_prime(81));
    EXPECT_FALSE(p.s_is_prime(82));
    EXPECT_TRUE(p.s_is_prime(83));
    EXPECT_FALSE(p.s_is_prime(84));
    EXPECT_FALSE(p.s_is_prime(85));
    EXPECT_FALSE(p.s_is_prime(86));
    EXPECT_FALSE(p.s_is_prime(87));
    EXPECT_FALSE(p.s_is_prime(88));
    EXPECT_TRUE(p.s_is_prime(89));

    EXPECT_FALSE(p.s_is_prime(90));
    EXPECT_FALSE(p.s_is_prime(91));
    EXPECT_FALSE(p.s_is_prime(92));
    EXPECT_FALSE(p.s_is_prime(93));
    EXPECT_FALSE(p.s_is_prime(94));
    EXPECT_FALSE(p.s_is_prime(95));
    EXPECT_FALSE(p.s_is_prime(96));
    EXPECT_TRUE(p.s_is_prime(97));
    EXPECT_FALSE(p.s_is_prime(98));
    EXPECT_FALSE(p.s_is_prime(99));
}

TEST_F(primes_test, s_is_prime_100_200)
{
    auto &p = *pc0;

    EXPECT_FALSE(p.s_is_prime(100));
    EXPECT_TRUE(p.s_is_prime(101));
    EXPECT_FALSE(p.s_is_prime(102));

    EXPECT_TRUE(p.s_is_prime(103));
    EXPECT_FALSE(p.s_is_prime(104));

    EXPECT_FALSE(p.s_is_prime(106));
    EXPECT_TRUE(p.s_is_prime(107));
    EXPECT_FALSE(p.s_is_prime(108));

    EXPECT_TRUE(p.s_is_prime(109));
    EXPECT_FALSE(p.s_is_prime(110));

    EXPECT_FALSE(p.s_is_prime(112));
    EXPECT_TRUE(p.s_is_prime(113));
    EXPECT_FALSE(p.s_is_prime(114));

    EXPECT_FALSE(p.s_is_prime(126));
    EXPECT_TRUE(p.s_is_prime(127));
    EXPECT_FALSE(p.s_is_prime(128));

    EXPECT_FALSE(p.s_is_prime(130));
    EXPECT_TRUE(p.s_is_prime(131));
    EXPECT_FALSE(p.s_is_prime(132));

    EXPECT_FALSE(p.s_is_prime(136));
    EXPECT_TRUE(p.s_is_prime(137));
    EXPECT_FALSE(p.s_is_prime(138));

    EXPECT_TRUE(p.s_is_prime(139));
    EXPECT_FALSE(p.s_is_prime(140));

    EXPECT_FALSE(p.s_is_prime(148));
    EXPECT_TRUE(p.s_is_prime(149));
    EXPECT_FALSE(p.s_is_prime(150));

    EXPECT_TRUE(p.s_is_prime(151));
    EXPECT_FALSE(p.s_is_prime(152));

    EXPECT_FALSE(p.s_is_prime(156));
    EXPECT_TRUE(p.s_is_prime(157));
    EXPECT_FALSE(p.s_is_prime(158));

    EXPECT_FALSE(p.s_is_prime(162));
    EXPECT_TRUE(p.s_is_prime(163));
    EXPECT_FALSE(p.s_is_prime(164));

    EXPECT_FALSE(p.s_is_prime(166));
    EXPECT_TRUE(p.s_is_prime(167));
    EXPECT_FALSE(p.s_is_prime(168));

    EXPECT_FALSE(p.s_is_prime(172));
    EXPECT_TRUE(p.s_is_prime(173));
    EXPECT_FALSE(p.s_is_prime(174));

    EXPECT_FALSE(p.s_is_prime(178));
    EXPECT_TRUE(p.s_is_prime(179));
    EXPECT_FALSE(p.s_is_prime(180));

    EXPECT_TRUE(p.s_is_prime(181));
    EXPECT_FALSE(p.s_is_prime(182));

    EXPECT_FALSE(p.s_is_prime(190));
    EXPECT_TRUE(p.s_is_prime(191));
    EXPECT_FALSE(p.s_is_prime(192));

    EXPECT_TRUE(p.s_is_prime(193));
    EXPECT_FALSE(p.s_is_prime(194));

    EXPECT_FALSE(p.s_is_prime(196));
    EXPECT_TRUE(p.s_is_prime(197));
    EXPECT_FALSE(p.s_is_prime(198));

    EXPECT_TRUE(p.s_is_prime(199));
    EXPECT_FALSE(p.s_is_prime(200));
}

TEST_F(primes_test, s_is_prime_carol_primes)
{
    auto &p = *pc0;

    EXPECT_FALSE(p.s_is_prime(222));
    EXPECT_TRUE(p.s_is_prime(223));
    EXPECT_FALSE(p.s_is_prime(224));

    EXPECT_FALSE(p.s_is_prime(3966));
    EXPECT_TRUE(p.s_is_prime(3967));
    EXPECT_FALSE(p.s_is_prime(3968));

    EXPECT_FALSE(p.s_is_prime(16126));
    EXPECT_TRUE(p.s_is_prime(16127));
    EXPECT_FALSE(p.s_is_prime(16128));

    EXPECT_FALSE(p.s_is_prime(1046526));
    EXPECT_TRUE(p.s_is_prime(1046527));
    EXPECT_FALSE(p.s_is_prime(1046528));

    EXPECT_FALSE(p.s_is_prime(16769022));
    EXPECT_TRUE(p.s_is_prime(16769023));
    EXPECT_FALSE(p.s_is_prime(16769024));

    EXPECT_FALSE(p.s_is_prime(1073676286));
    EXPECT_TRUE(p.s_is_prime(1073676287));
    EXPECT_FALSE(p.s_is_prime(1073676288));

    EXPECT_FALSE(p.s_is_prime(68718952446));
    EXPECT_TRUE(p.s_is_prime(68718952447));
    EXPECT_FALSE(p.s_is_prime(68718952448));

    EXPECT_FALSE(p.s_is_prime(274876858366));
    EXPECT_TRUE(p.s_is_prime(274876858367));
    EXPECT_FALSE(p.s_is_prime(274876858368));

    EXPECT_FALSE(p.s_is_prime(4398042316798));
    EXPECT_TRUE(p.s_is_prime(4398042316799));
    EXPECT_FALSE(p.s_is_prime(4398042316800));
}

TEST_F(primes_test, is_prime_0_100)
{
    auto &p = *pcl;

    EXPECT_FALSE(p.is_prime(0));
    EXPECT_FALSE(p.is_prime(1));
    EXPECT_TRUE(p.is_prime(2));
    EXPECT_TRUE(p.is_prime(3));
    EXPECT_FALSE(p.is_prime(4));
    EXPECT_TRUE(p.is_prime(5));
    EXPECT_FALSE(p.is_prime(6));
    EXPECT_TRUE(p.is_prime(7));
    EXPECT_FALSE(p.is_prime(8));
    EXPECT_FALSE(p.is_prime(9));

    EXPECT_FALSE(p.is_prime(10));
    EXPECT_TRUE(p.is_prime(11));
    EXPECT_FALSE(p.is_prime(12));
    EXPECT_TRUE(p.is_prime(13));
    EXPECT_FALSE(p.is_prime(14));
    EXPECT_FALSE(p.is_prime(15));
    EXPECT_FALSE(p.is_prime(16));
    EXPECT_TRUE(p.is_prime(17));
    EXPECT_FALSE(p.is_prime(18));
    EXPECT_TRUE(p.is_prime(19));

    EXPECT_FALSE(p.is_prime(20));
    EXPECT_FALSE(p.is_prime(21));
    EXPECT_FALSE(p.is_prime(22));
    EXPECT_TRUE(p.is_prime(23));
    EXPECT_FALSE(p.is_prime(24));
    EXPECT_FALSE(p.is_prime(25));
    EXPECT_FALSE(p.is_prime(26));
    EXPECT_FALSE(p.is_prime(27));
    EXPECT_FALSE(p.is_prime(28));
    EXPECT_TRUE(p.is_prime(29));

    EXPECT_FALSE(p.is_prime(30));
    EXPECT_TRUE(p.is_prime(31));
    EXPECT_FALSE(p.is_prime(32));
    EXPECT_FALSE(p.is_prime(33));
    EXPECT_FALSE(p.is_prime(34));
    EXPECT_FALSE(p.is_prime(35));
    EXPECT_FALSE(p.is_prime(36));
    EXPECT_TRUE(p.is_prime(37));
    EXPECT_FALSE(p.is_prime(38));
    EXPECT_FALSE(p.is_prime(39));

    EXPECT_FALSE(p.is_prime(40));
    EXPECT_TRUE(p.is_prime(41));
    EXPECT_FALSE(p.is_prime(42));
    EXPECT_TRUE(p.is_prime(43));
    EXPECT_FALSE(p.is_prime(44));
    EXPECT_FALSE(p.is_prime(45));
    EXPECT_FALSE(p.is_prime(46));
    EXPECT_TRUE(p.is_prime(47));
    EXPECT_FALSE(p.is_prime(48));
    EXPECT_FALSE(p.is_prime(49));

    EXPECT_FALSE(p.is_prime(50));
    EXPECT_FALSE(p.is_prime(51));
    EXPECT_FALSE(p.is_prime(52));
    EXPECT_TRUE(p.is_prime(53));
    EXPECT_FALSE(p.is_prime(54));
    EXPECT_FALSE(p.is_prime(55));
    EXPECT_FALSE(p.is_prime(56));
    EXPECT_FALSE(p.is_prime(57));
    EXPECT_FALSE(p.is_prime(58));
    EXPECT_TRUE(p.is_prime(59));

    EXPECT_FALSE(p.is_prime(60));
    EXPECT_TRUE(p.is_prime(61));
    EXPECT_FALSE(p.is_prime(62));
    EXPECT_FALSE(p.is_prime(63));
    EXPECT_FALSE(p.is_prime(64));
    EXPECT_FALSE(p.is_prime(65));
    EXPECT_FALSE(p.is_prime(66));
    EXPECT_TRUE(p.is_prime(67));
    EXPECT_FALSE(p.is_prime(68));
    EXPECT_FALSE(p.is_prime(69));

    EXPECT_FALSE(p.is_prime(70));
    EXPECT_TRUE(p.is_prime(71));
    EXPECT_FALSE(p.is_prime(72));
    EXPECT_TRUE(p.is_prime(73));
    EXPECT_FALSE(p.is_prime(74));
    EXPECT_FALSE(p.is_prime(75));
    EXPECT_FALSE(p.is_prime(76));
    EXPECT_FALSE(p.is_prime(77));
    EXPECT_FALSE(p.is_prime(78));
    EXPECT_TRUE(p.is_prime(79));

    EXPECT_FALSE(p.is_prime(80));
    EXPECT_FALSE(p.is_prime(81));
    EXPECT_FALSE(p.is_prime(82));
    EXPECT_TRUE(p.is_prime(83));
    EXPECT_FALSE(p.is_prime(84));
    EXPECT_FALSE(p.is_prime(85));
    EXPECT_FALSE(p.is_prime(86));
    EXPECT_FALSE(p.is_prime(87));
    EXPECT_FALSE(p.is_prime(88));
    EXPECT_TRUE(p.is_prime(89));

    EXPECT_FALSE(p.is_prime(90));
    EXPECT_FALSE(p.is_prime(91));
    EXPECT_FALSE(p.is_prime(92));
    EXPECT_FALSE(p.is_prime(93));
    EXPECT_FALSE(p.is_prime(94));
    EXPECT_FALSE(p.is_prime(95));
    EXPECT_FALSE(p.is_prime(96));
    EXPECT_TRUE(p.is_prime(97));
    EXPECT_FALSE(p.is_prime(98));
    EXPECT_FALSE(p.is_prime(99));
}

TEST_F(primes_test, is_prime_100_200)
{
    auto &p = *pcl;

    EXPECT_FALSE(p.is_prime(100));
    EXPECT_TRUE(p.is_prime(101));
    EXPECT_FALSE(p.is_prime(102));

    EXPECT_TRUE(p.is_prime(103));
    EXPECT_FALSE(p.is_prime(104));

    EXPECT_FALSE(p.is_prime(106));
    EXPECT_TRUE(p.is_prime(107));
    EXPECT_FALSE(p.is_prime(108));

    EXPECT_TRUE(p.is_prime(109));
    EXPECT_FALSE(p.is_prime(110));

    EXPECT_FALSE(p.is_prime(112));
    EXPECT_TRUE(p.is_prime(113));
    EXPECT_FALSE(p.is_prime(114));

    EXPECT_FALSE(p.is_prime(126));
    EXPECT_TRUE(p.is_prime(127));
    EXPECT_FALSE(p.is_prime(128));

    EXPECT_FALSE(p.is_prime(130));
    EXPECT_TRUE(p.is_prime(131));
    EXPECT_FALSE(p.is_prime(132));

    EXPECT_FALSE(p.is_prime(136));
    EXPECT_TRUE(p.is_prime(137));
    EXPECT_FALSE(p.is_prime(138));

    EXPECT_TRUE(p.is_prime(139));
    EXPECT_FALSE(p.is_prime(140));

    EXPECT_FALSE(p.is_prime(148));
    EXPECT_TRUE(p.is_prime(149));
    EXPECT_FALSE(p.is_prime(150));

    EXPECT_TRUE(p.is_prime(151));
    EXPECT_FALSE(p.is_prime(152));

    EXPECT_FALSE(p.is_prime(156));
    EXPECT_TRUE(p.is_prime(157));
    EXPECT_FALSE(p.is_prime(158));

    EXPECT_FALSE(p.is_prime(162));
    EXPECT_TRUE(p.is_prime(163));
    EXPECT_FALSE(p.is_prime(164));

    EXPECT_FALSE(p.is_prime(166));
    EXPECT_TRUE(p.is_prime(167));
    EXPECT_FALSE(p.is_prime(168));

    EXPECT_FALSE(p.is_prime(172));
    EXPECT_TRUE(p.is_prime(173));
    EXPECT_FALSE(p.is_prime(174));

    EXPECT_FALSE(p.is_prime(178));
    EXPECT_TRUE(p.is_prime(179));
    EXPECT_FALSE(p.is_prime(180));

    EXPECT_TRUE(p.is_prime(181));
    EXPECT_FALSE(p.is_prime(182));

    EXPECT_FALSE(p.is_prime(190));
    EXPECT_TRUE(p.is_prime(191));
    EXPECT_FALSE(p.is_prime(192));

    EXPECT_TRUE(p.is_prime(193));
    EXPECT_FALSE(p.is_prime(194));

    EXPECT_FALSE(p.is_prime(196));
    EXPECT_TRUE(p.is_prime(197));
    EXPECT_FALSE(p.is_prime(198));

    EXPECT_TRUE(p.is_prime(199));
    EXPECT_FALSE(p.is_prime(200));
}

TEST_F(primes_test, is_prime_carol_primes)
{
    auto &p = *pcl;

    EXPECT_FALSE(p.is_prime(222));
    EXPECT_TRUE(p.is_prime(223));
    EXPECT_FALSE(p.is_prime(224));

    EXPECT_FALSE(p.is_prime(3966));
    EXPECT_TRUE(p.is_prime(3967));
    EXPECT_FALSE(p.is_prime(3968));

    EXPECT_FALSE(p.is_prime(16126));
    EXPECT_TRUE(p.is_prime(16127));
    EXPECT_FALSE(p.is_prime(16128));

    EXPECT_FALSE(p.is_prime(1046526));
    EXPECT_TRUE(p.is_prime(1046527));
    EXPECT_FALSE(p.is_prime(1046528));

    EXPECT_FALSE(p.is_prime(16769022));
    EXPECT_TRUE(p.is_prime(16769023));
    EXPECT_FALSE(p.is_prime(16769024));

    EXPECT_FALSE(p.is_prime(1073676286));
    EXPECT_TRUE(p.is_prime(1073676287));
    EXPECT_FALSE(p.is_prime(1073676288));

    EXPECT_FALSE(p.is_prime(68718952446));
    EXPECT_TRUE(p.is_prime(68718952447));
    EXPECT_FALSE(p.is_prime(68718952448));

    EXPECT_FALSE(p.is_prime(274876858366));
    EXPECT_TRUE(p.is_prime(274876858367));
    EXPECT_FALSE(p.is_prime(274876858368));

    EXPECT_FALSE(p.is_prime(4398042316798));
    EXPECT_TRUE(p.is_prime(4398042316799));
    EXPECT_FALSE(p.is_prime(4398042316800));
}

TEST_F(primes_test, is_prime_1125899839733759)
{
    auto &p = *pc0;

    EXPECT_FALSE(p.is_prime(1125899839733758));
    EXPECT_TRUE(p.is_prime(1125899839733759));
    EXPECT_FALSE(p.is_prime(1125899839733760));
}

TEST_F(primes_test, is_prime_18014398241046527)
{
    auto &p = *pc0;

    EXPECT_FALSE(p.is_prime(18014398241046526));
    EXPECT_TRUE(p.is_prime(18014398241046527));
    EXPECT_FALSE(p.is_prime(18014398241046528));
}

/*
TEST_F(primes_test, is_prime_2_pow_58_minus_27)
{
    auto &p = *pc0;

    // 2^58 - 27
    auto number = 0x400000000000000 - 27UL;

    EXPECT_FALSE(p.is_prime(number - 1UL));
    EXPECT_TRUE(p.is_prime(number));
    EXPECT_FALSE(p.is_prime(number + 1UL));
}
*/

/*
TEST_F(primes_test, is_prime_1111111111111111111)
{
    auto &p = *pc0;

    EXPECT_FALSE(p.is_prime(1111111111111111110));
    EXPECT_TRUE(p.is_prime(1111111111111111111));
    EXPECT_FALSE(p.is_prime(1111111111111111112));
}
*/


TEST_F(primes_test, is_prime_limits)
{
    auto primes102 = primes(102U);
    auto &p = primes102;

    // prime number for which up to sqrt(number) is available in cache
    EXPECT_TRUE(p.is_prime(3037U));

    // square number for which up to sqrt(number) is available in cache
    EXPECT_FALSE(p.is_prime(53U * 53U));

    // square number for which up to sqrt(number) is missed by two in cache
    EXPECT_FALSE(p.is_prime(103U * 103U));

    // square number for which up to sqrt(number) is missed by six in cache
    EXPECT_FALSE(p.is_prime(107U * 107U));

    // prime number for which up to sqrt(number) is not available in cache
    EXPECT_TRUE(p.is_prime(11467U));

}

TEST_F(primes_test, get_cached_primes)
{
    auto &pl = *pcl;
    auto &ps = *pcs;

    auto primes = pl.get_cached_primes(5, 0);
    EXPECT_EQ(0U, primes.size());

    primes = pl.get_cached_primes(5, 5);
    EXPECT_EQ(0U, primes.size());

    primes = pl.get_cached_primes(5, 6);
    EXPECT_EQ(1U, primes.size());
    EXPECT_EQ(5U, primes.at(0));

    primes = pl.get_cached_primes(0, 7);
    EXPECT_EQ(3U, primes.size());
    EXPECT_EQ(2U, primes.at(0));
    EXPECT_EQ(3U, primes.at(1));
    EXPECT_EQ(5U, primes.at(2));

    primes = pl.get_cached_primes(3, 7);
    EXPECT_EQ(2U, primes.size());
    EXPECT_EQ(3U, primes.at(0));
    EXPECT_EQ(5U, primes.at(1));

    primes = pl.get_cached_primes(13, 18);
    EXPECT_EQ(2U, primes.size());
    EXPECT_EQ(13U, primes.at(0));
    EXPECT_EQ(17U, primes.at(1));

    // First 10000 primes.
    uint64_t end = 104730U;
    primes = pl.get_cached_primes(0, end);
    EXPECT_EQ(10000U, primes.size());
    EXPECT_EQ(end - 1U, primes.at(primes.size() - 1U));

    primes = ps.get_cached_primes();
    EXPECT_EQ(1229U, primes.size());

    primes = ps.get_cached_primes(10000U);
    EXPECT_EQ(0U, primes.size());

    primes = ps.get_cached_primes(5000U);
    EXPECT_EQ(560U, primes.size());
    EXPECT_EQ(5003U, primes.at(0));
    EXPECT_EQ(5009U, primes.at(1));
    EXPECT_EQ(5011U, primes.at(2));

    primes = ps.get_cached_primes(1U, 5000U);
    EXPECT_EQ(669U, primes.size());
}

