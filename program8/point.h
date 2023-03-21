/*******************************************************************
*Summary:
    This class is a parant class of the circle and cylinder class and defines a point
*******************************************************************/

#ifndef POINT_H
#define POINT_H

#include <iostream>
#include <fstream>
#include <string>
#include <cmath>
#include <iomanip>
using namespace std;

class Point { 
    protected: 
        float x;
        float y;

    public: 
        Point(float x_cord, float y_cord);
        friend ostream& operator<<(ostream &output, const Point &p);
};


#endif