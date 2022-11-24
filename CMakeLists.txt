cmake_minimum_required(VERSION 3.0.0)
project(HahaORM VERSION 0.1.0)

include(CTest)
enable_testing()

add_subdirectory(entity)
add_executable(HahaORM main.cpp)
target_link_libraries(HahaORM PUBLIC GMessageEntity -lmysqlcppconn8 -lprotobuf)
target_include_directories(HahaORM PUBLIC 
"${PROJECT_BINARY_DIR}" 
"${PROJECT_BINARY_DIR}/entity"
)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++20")