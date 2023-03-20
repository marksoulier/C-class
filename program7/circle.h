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
        float r;

    public: 
        Circle(float x_cord, float y_cord, float radius);
        friend ostream& operator<<(ostream &output, const Circle &c);
};

#endif