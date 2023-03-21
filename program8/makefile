launch.exe: point.o circle.o cylinder.o main.o
	g++ -o launch.exe point.o circle.o cylinder.o main.o 

point.o: point.cpp point.h shape.h
	g++ -c point.cpp

circle.o: circle.cpp circle.h point.h
	g++ -c circle.cpp

cylinder.o: cylinder.cpp cylinder.h circle.h
	g++ -c cylinder.cpp

main.o: main.cpp cylinder.h circle.h point.h shape.h
	g++ -c main.cpp
