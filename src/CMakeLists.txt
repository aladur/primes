set(CMAKE_CXX_STANDARD 17)

add_library(
    ${PROJECT_NAME}
    primes.cpp
)

target_compile_features(${PROJECT_NAME} PUBLIC cxx_std_17)
set_target_properties(${PROJECT_NAME} PROPERTIES CXX_EXTENSIONS OFF)

target_include_directories(                                                     
    ${PROJECT_NAME}
    PUBLIC
    $<BUILD_INTERFACE:${CMAKE_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>
)

install(
  TARGETS ${PROJECT_NAME}
  RUNTIME DESTINATION
  LIBRARY DESTINATION
  ARCHIVE DESTINATION
  PUBLIC_HEADER DESTINATION
)

