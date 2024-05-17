cmake_minimum_required(VERSION 3.27)

project(POP)

file(GLOB_RECURSE src_files CONFIGURE_DEPENDS "src/*.cpp")
file(GLOB_RECURSE header_files CONFIGURE_DEPENDS "src/*.h")

message(STATUS "Source files: ${src_files}")
message(STATUS "Header files: ${header_files}")

if(NOT src_files)
    message(FATAL_ERROR "No source files found in src directory")
endif()

add_executable(pop ${src_files} ${header_files})
