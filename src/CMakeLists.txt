#file(GLOB source_files src/*.cpp include/*.hpp)

include_directories(${PROJECT_SOURCE_DIR}/include/)
add_library(board 
				"boardSolver.cpp"
				 "board.cpp")
#target_link_libraries(sudoku LibProject)
