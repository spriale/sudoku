project(sudokuMain)



set (CMAKE_CXX_STANDARD 17)
cmake_minimum_required(VERSION 3.15)

add_subdirectory(src)
add_subdirectory(lib)

include_directories(${PROJECT_SOURCE_DIR}/lib/include/)

add_executable(main
	main.cpp
)

target_link_libraries(main board sudokuQt)

