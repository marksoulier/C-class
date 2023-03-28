#include "circle.h"
#include "cylinder.h"


/*******************************************************************
 * @name Cylinder constructor
 * @brief inicializes the x and y corrdinates of the circle with its radius and height
 * @param x and y corrdinates of the cylinder and its radius and height
 * @retval returns nothing
*******************************************************************/
Cylinder::Cylinder(float x_cord, float y_cord, float radius, float height) : Circle(x_cord, y_cord, radius) {
    h = height;
}

/*******************************************************************
 * @name output function
 * @brief sends a updated output for cout
 * @param ostream specifically cout
 * @retval a updated ouput for cout
*******************************************************************/
ostream& Cylinder::output(ostream& out) {
    out << "Cylinder with center at = (" << x <<", " << y << "); and Radius = " << r << "; ";
    out << "Height = " << h << "; Volume = " << M_PI*r*r*h;
    return out;
}