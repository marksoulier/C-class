launch.exe: Sudoku.o main.o
	g++ -o launch.exe Sudoku.o main.o

Sudoku.o: Sudoku.cpp Sudoku.h
	g++ -c Sudoku.cpp

main.o: main.cpp Sudoku.h
	g++ -c main.cpp