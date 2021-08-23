# primes

A C++ class providing two mechanisms for prime number checking.

* A cache filled with an optimized algorithm of sieve of Erathosthenes
* A trial division test for checking any number

## Prime cache
When caching prime numbers using the [sieve of Erathosthenes](https://en.wikipedia.org/wiki/Sieve_of_Eratosthenes) for each number one bit is used.
This cache has been optimized by skipping any
number which can be divided by 2 or 3, reducing the cache size to 1/3 of its
original size. For example the prime status of the first 10000 numbers then
only needs less than 417 Bytes. The bits are stored in a `std::vector<bool>`
which for this purpose provides good performance. I also tried with
`std::vector<uint64_t>` with bit shifted access masks which had a very similar
performance. According to RAII the cache initialization is part of the
constructor: `primes::primes(uint64_t cached_primes = 0)`.

## Trial division test
A number of any size can be checked for being prime by a [trial division](https://en.wikipedia.org/wiki/Trial_division) by all primes beginning from 2 up to
the square root of the number. If for all
these divisions `reminder != 0` it is a prime number.

If the primes cache is not accessible or smaller than the square root of the
number the division test is executed with any `number = 6*k - 1` or
`number = 6*k + 1`.

For this trial division test there is a static member function of primes (without access to the primes cache):
`bool primes::s_is_prime(uint64_t number)`.

There is also a member function of primes, with access to the primes cache:
`bool primes::is_prime(uint64_t number)`.

## Build instructions

As build system generator [CMake has to be downloaded](https://cmake.org/download) and installed.

Download and build (Internet access is needed to download [googletest](https://github.com/google/googletest/) as part of CMake).
```
git clone https:://github.com/aladur/primes.git
mkdir primes_build
cd primes_build
cmake -S ../primes -B .
make
```
Execute all unit tests
```
tests/primes_test
```
Install it
```
sudo make install
```
## Other Links

Lots of prime numbers and lists of prime numbers usefull for unit tests.
https://primes.utm.edu/lists/

Carol primes I used in the unit tests.
https://www.numbersaplenty.com/set/Carol_number/

A very efficient primes cache implementation with low memory foot print.
In extension to my algorithm it not only skips any numbers which can be divided
by 2 or 3 but also 5 and 7, published in 1998.
https://wwwhomes.uni-bielefeld.de/achim/prime_sieve.html

Algorithm how to estimate the cache size for a range of numbers used in this
project.
https://math.stackexchange.com/questions/642775/number-of-prime-numbers-in-a-rang

Video about prime numbers ordering in spirals. This video inspired me for this
project.
https://youtu.be/EK32jo7i5LQ
