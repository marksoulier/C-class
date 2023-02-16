/*******************************************************************
*Summary:
    This class stores a complex number that can support addition
    subtraction, multiplication, and division of complex numbers
*******************************************************************/

#ifndef MYCOMPLEX_H
#define MYCOMPLEX_H

#include <iostream>
#include <fstream>
#include <string>
#include <cmath>
#include <iomanip>
using namespace std;

class MyComplex { 
    private: 
        float real;
        float imaginary;

    public: 
        MyComplex(float rp, float ip);
        MyComplex();
        void printMyComplex();
        MyComplex operator + (const MyComplex&);
        MyComplex operator - (const MyComplex&);
        MyComplex operator * (const MyComplex&);
        MyComplex operator / (const MyComplex&);
};

#endif