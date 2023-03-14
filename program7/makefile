launch.exe: Point.o Circle.o Cylinder.o main.o
	g++ -o launch.exe Point.o Circle.o Cylinder.o main.o

Point.o: Point.cpp Point.h
	g++ -c Point.cpp

Circle.o: Circle.cpp Circle.h
	g++ -c Circle.cpp

Cylinder.o: Cylinder.cpp Cylinder.h
	g++ -c Cylinder.cpp

main.o: main.cpp Cylinder.h Circle.h Point.h
	g++ -c main.cpp