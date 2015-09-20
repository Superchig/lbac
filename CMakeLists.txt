cmake_minimum_required(VERSION 3.3.1)
project(lbac_cpp)

add_executable(lbac src/main.cpp
				   src/cradle.cpp)

set(CMAKE_CXX_COMPILER clang++)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wextra -pedantic -g")

set_property(TARGET lbac PROPERTY CXX_STANDARD 14)
set_property(TARGET lbac PROPERTY CXX_STANDARD_REQUIRED ON)
