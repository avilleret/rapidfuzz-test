cmake_minimum_required(VERSION 3.18 FATAL_ERROR)
project(RapidFuzz-test)
set(CMAKE_CXX_STANDARD 17)

include(FetchContent)
FetchContent_Declare( 
	rapidfuzz
    SOURCE_DIR ${CMAKE_SOURCE_DIR}/rapidfuzz-cpp
)

FetchContent_MakeAvailable(rapidfuzz)

add_executable(foo main.cpp)
target_link_libraries(foo PRIVATE rapidfuzz::rapidfuzz)
