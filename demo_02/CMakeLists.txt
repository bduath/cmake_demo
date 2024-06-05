cmake_minimum_required(VERSION 3.20)

project (demo_02 VERSION 0.1)

# 查找目录下的所有源文件，并将名称保存到 DIR_SRCS 变量
aux_source_directory(. DIR_SRCS)

add_executable(demo_02 ${DIR_SRCS})
