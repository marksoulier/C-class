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
 * @name opperator overload of <<
 * @brief prints out this statment to the stream when called apon
 * @param the stream it is sent to and the class
 * @retval the stream os
*******************************************************************/
ostream &operator<<(ostream &output, const Cylinder &C) {
    output << "Cylinder with center = (" << C.x << ", " << C.y << "); " << "Radius = " << C.r << "; Height = "  
    << C.h << "; Volume = " << C.h * M_PI * C.r * C.r;
    return output;
}