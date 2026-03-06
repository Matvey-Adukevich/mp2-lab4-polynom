cmake_minimum_required(VERSION 3.16)

set(PROJECT_NAME arithmetic)
project(${PROJECT_NAME})


set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)




# TODO(Korniakov): not sure if these lines are needed
set(CMAKE_CONFIGURATION_TYPES "Debug;Release" CACHE STRING "Configs" FORCE)
if(NOT CMAKE_BUILD_TYPE)
  set(CMAKE_BUILD_TYPE Release)
endif()

set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY_RELEASE ${CMAKE_BINARY_DIR}/bin)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY_DEBUG ${CMAKE_RUNTIME_OUTPUT_DIRECTORY_RELEASE})

set(MP2_LIBRARY "${PROJECT_NAME}")
set(MP2_TESTS   "test_${PROJECT_NAME}")
set(MP2_INCLUDE "${CMAKE_CURRENT_SOURCE_DIR}/include")

set(ANTLR_RUNTIME_SRC_DIR "${CMAKE_CURRENT_SOURCE_DIR}/antlr4-cpp-runtime-4.13.2-source/runtime/src")
set(ANTLR_LIB_DIR "${CMAKE_CURRENT_SOURCE_DIR}/antlr_sln/runtime/Debug")

#include_directories("${MP2_INCLUDE}" gtest)

add_subdirectory(src)
add_subdirectory(sample)
#add_subdirectory(antlr-4.13.2)
#add_subdirectory(parser)
#add_subdirectory(samples_svetofor)
#add_subdirectory(gtest)
add_subdirectory(googletest-main)
add_subdirectory(test)


# REPORT
message( STATUS "")
message( STATUS "General configuration for ${PROJECT_NAME}")
message( STATUS "======================================")
message( STATUS "")
message( STATUS "   Configuration: ${CMAKE_BUILD_TYPE}")
message( STATUS "")
