cmake_minimum_required (VERSION 3.9)
project (HELLO)

add_library (str_util SHARED str_util.c)

target_include_directories (str_util PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

add_executable (strUtilDemo demo.c)

target_link_libraries (strUtilDemo LINK_PUBLIC str_util)