cmake_minimum_required(VERSION 2.8.12)
project(paramater_flags)
set(CMAKE_C_FLAGS "-Wall -Werror")
add_executable(target target.c)