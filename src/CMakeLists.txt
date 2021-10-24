cmake_minimum_required(VERSION 3.19)

add_executable(27.4 main.cpp
        ${CLASS_FOLDER}/figures.h)

target_include_directories(27.4 PUBLIC ${INCLUDE_FOLDER})
target_include_directories(27.4 PUBLIC ${CLASS_FOLDER})