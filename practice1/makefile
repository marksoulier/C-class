qr.exe: main.o Rational.o
	g++ -o qr.exe main.o Rational.o

Rational.o: Rational.cpp Rational.h
	g++ -c Rational.cpp

main.o: main.cpp Rational.h
	g++ -c main.cpp