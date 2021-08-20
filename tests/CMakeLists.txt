project(primes_test)

enable_testing()

add_executable(
    ${PROJECT_NAME}
    isqrt_test.cpp
    primes_test.cpp
)

target_link_libraries(
    ${PROJECT_NAME}
    PRIVATE
    gtest_main
    primes
)

include(GoogleTest)
gtest_discover_tests(${PROJECT_NAME})

