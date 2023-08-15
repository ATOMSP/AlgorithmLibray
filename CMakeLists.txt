# 指定最小版本号
# cmake_minimum_required(version 版本号)
# 定义工程名称
# project(项目名称)
# 显示定义变量
# set(var [value])

cmake_minimum_required(VERSION 3.21)
project(AlgorithmLibray)
set(CMAKE_CXX_STANDARD 14)





add_executable(AlgorithmLibray main.cpp)


target_include_directories(AlgorithmLibray PUBLIC INC_DIR)





























