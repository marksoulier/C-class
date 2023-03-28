/*******************************************************************
*Summary:
    This class is an abstract class of Shape that is used to point to the other classes
*******************************************************************/

#ifndef SHAPE_H
#define SHAPE_H

#include <iostream>
#include <fstream>
#include <string>
#include <cmath>
#include <iomanip>
using namespace std;

class Shape { 
    public: 
        virtual ostream& output(ostream& out) = 0; 
        friend ostream& operator<<(ostream &output_os, Shape& s){
            return s.output(output_os);
        }
};

#endif