/*******************************************************************
*Summary:
    This class stores a circle class that is inherited from the point class
*******************************************************************/

#ifndef POINT_H
#define POINT_H

#include <iostream>
#include <fstream>
#include <string>
#include <cmath>
#include <iomanip>
#include "point.h"
using namespace std;

class Circle : public Point { 
    protected: 
        float r;

    public: 
        Circle(float radius, float x_cord, float y_cord);
        friend ostream& operator<<(ostream& os, const Circle& p);
};

#endif