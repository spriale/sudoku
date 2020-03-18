project(sudokuMain)

cmake_minimum_required(VERSION 3.15)

add_subdirectory(src)

add_executable(main
	main.cpp
)

target_link_libraries(main board)