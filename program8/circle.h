/*******************************************************************
*Summary:
    This class stores a circle class that is inherited from the point class
*******************************************************************/

#ifndef CIRCLE_H
#define CIRCLE_H

#include "point.h"
using namespace std;

class Circle : public Point { 
    protected: 
        float x;
        float y;
        float r;

    public: 
        Circle(float x_cord, float y_cord, float radius);
        virtual ostream& output(ostream& out);
};

#endif