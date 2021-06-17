cmake_minimum_required(VERSION 3.17...3.30)

set(pre_project_name cpp20-extensions)
set(pre_include_dir include/)

project(${pre_project_name}
        VERSION 0.0.1
        LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

file(GLOB_RECURSE include_files include/*.h)

add_library(${pre_project_name} INTERFACE)
target_include_directories(${pre_project_name} INTERFACE ${pre_include_dir})
target_sources(${pre_project_name} INTERFACE ${include_files})

add_executable(${pre_project_name}_test test.cpp)
target_link_libraries(${pre_project_name}_test ${pre_project_name})