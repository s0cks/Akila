cmake_minimum_required(VERSION 3.3)
project(Akila)

include_directories(include)

find_package(Threads)

file(GLOB_RECURSE HEADERS include/akila/*.h)
file(GLOB_RECURSE SOURCES src/*.c)

set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -std=gnu99")

add_executable(Akila ${HEADERS} ${SOURCES})
target_link_libraries(Akila ${CMAKE_THREAD_LIBS_INIT})
