cmake_minimum_required(VERSION 3.0)

project(excel)

add_library(${PROJECT_NAME} excel_changer.cpp)

target_include_directories(${PROJECT_NAME} PRIVATE /home/user/Ola/cpp/libxl-4.0.3.1/include_cpp) 

target_link_libraries(${PROJECT_NAME} /home/user/Ola/cpp/libxl-4.0.3.1/lib64/libxl.so)

