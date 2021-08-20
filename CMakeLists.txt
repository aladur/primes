cmake_minimum_required(VERSION 3.14)

project(primes
        VERSION 1.0
        DESCRIPTION "A library for calculating prime numbers"
        LANGUAGES CXX)

include (FetchContent)

FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/refs/tags/release-1.11.0.zip
  URL_HASH MD5=52943a59cefce0ae0491d4d2412c120b
)

# Prevent googletest from also being installed
option(INSTALL_GTEST OFF)

# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)

FetchContent_MakeAvailable(googletest)

add_subdirectory(src)
add_subdirectory(tests)

