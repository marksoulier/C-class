launch.exe: Skater.o List.o main.o
	g++ -o launch.exe Skater.o List.o main.o

Skater.o: skater.cpp skater.h
	g++ -c skater.cpp

List.o: list.cpp list.h
	g++ -c list.cpp

main.o: main.cpp skater.h
	g++ -c main.cpp