cmake_minimum_required(VERSION 3.29)
project(HelloC C)

set(CMAKE_C_STANDARD 11)

# 遍历项目根目录下所有的 .c或.cpp 文件
file (GLOB_RECURSE files *.c) # 如果是cpp请修改为*.cpp
foreach (file ${files})
    string(REGEX REPLACE ".+/(.+)\\..*" "\\1" exe ${file})
    add_executable (${exe} ${file})
    message (\ \ \ \ --\ src/${exe}.cpp\ will\ be\ compiled\ to\ bin/${exe})
endforeach ()