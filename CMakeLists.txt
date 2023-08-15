cmake_minimum_required(VERSION 3.21)
project(AlgorithmLibray CXX)
set(CMAKE_CXX_STANDARD 14)



add_executable(AlgorithmLibray
        main.cpp
        )

target_include_directories(AlgorithmLibray PUBLIC
        Framework
        )






























