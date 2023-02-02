qr.exe: Program2.o Rational.o
	g++ -o qr.exe Program2.o Rational.o

Rational.o: Rational.cpp Rational.h
	g++ -c Rational.cpp

Program2.o: Program2.cpp Rational.h
	g++ -c Program2.cpp