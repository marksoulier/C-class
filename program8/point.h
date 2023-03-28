/*******************************************************************
*Summary:
    This class is a parant class of the circle and cylinder class and defines a point
*******************************************************************/

#ifndef POINT_H
#define POINT_H

#include "shape.h"
using namespace std;

class Point: public Shape { 
    protected: 
        float x;
        float y;

    public: 
        Point(float x_cord, float y_cord);
        virtual ostream& output(ostream& out);
};


#endif
