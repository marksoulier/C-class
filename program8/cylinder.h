/*******************************************************************
*Summary:
    This class stores a cylinder class that is inherited from the circle class
*******************************************************************/

#ifndef CYLINDER_H
#define CYLINDER_H

#include "circle.h"
using namespace std;

class Cylinder : public Circle { 
    protected: 
        float h;

    public: 
        Cylinder(float x_cord, float y_cord, float radius, float height);
        virtual ostream& output(ostream& out);
};

#endif