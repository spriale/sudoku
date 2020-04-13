project(sudokuMain)

set (CMAKE_CXX_STANDARD 17)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

cmake_minimum_required(VERSION 3.15)

set (CMAKE_PREFIX_PATH "C:\\Qt\\5.13.2\\msvc2017")

find_package(Qt5 COMPONENTS Widgets REQUIRED)

add_subdirectory(src)
add_executable(main
	main.cpp
	sudoku.cpp
	sudoku.ui
	sudoku.qrc
)

target_link_libraries(main board Qt5::Widgets)


