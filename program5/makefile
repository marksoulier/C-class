launch.exe: MyComplex.o main.o
	g++ -o launch.exe MyComplex.o main.o

MyComplex.o: MyComplex.cpp MyComplex.h
	g++ -c MyComplex.cpp

main.o: main.cpp MyComplex.h
	g++ -c main.cpp