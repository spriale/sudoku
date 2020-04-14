#file(GLOB source_files src/*.cpp include/*.hpp)


set(CMAKE_PREFIX_PATH "C:\\Qt\\5.13.2\\msvc2017")
set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

find_package(Qt5 COMPONENTS Widgets Core REQUIRED)

include_directories(${PROJECT_SOURCE_DIR}/include/)
include_directories(${PROJECT_SOURCE_DIR}/lib/include/)


add_library(sudokuQt 
				"src/sudoku.cpp"
				"src/sudoku.ui"
				"src/sudoku.qrc"
				"src/moc_sudoku.cpp"
			)
target_link_libraries(sudokuQt Qt5::Widgets Qt5::Core)

