cmake_minimum_required(VERSION 3.8)
project(Test1b)

add_executable(test1b
        main.cpp
        )

set_target_properties(test1b PROPERTIES CXX_STANDARD 17)