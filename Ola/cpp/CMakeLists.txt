cmake_minimum_required(VERSION 3.16.3) # to trzeba zawsze dodac

project(Ola)

set (CMAKE_CXX_STANDARD 20)

add_executable(${PROJECT_NAME} main.cpp) # poprostu dodanie zrodeł

add_subdirectory(subdir) # dodanie podfolderow

target_link_libraries(${PROJECT_NAME} excel /home/user/Ola/cpp/libxl-4.0.3.1/lib64/libxl.so)

target_include_directories(${PROJECT_NAME} PRIVATE subdir /home/user/Ola/cpp/libxl-4.0.3.1/include_cpp) #to definiujemy gdzie ma szukac .hpp

# target_link_directories(${PROJECT_NAME} PRIVATE subdir)


