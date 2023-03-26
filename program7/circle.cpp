#include "circle.h"
#include "point.h"


/*******************************************************************
 * @name Circle
 * @brief inicializes the x and y corrdinates of the circle with its radius
 * @param x and y corrdinates of the point and its radius
 * @retval returns nothing
*******************************************************************/
Circle::Circle(float x_cord, float y_cord, float radius) : Point(x_cord, y_cord) 
{
    x = x_cord;
    y = y_cord;
    r = radius;
}

/*******************************************************************
 * @name opperator overload of <<
 * @brief prints out this statment to the stream when called apon
 * @param the stream it is sent to and the class
 * @retval the stream os
*******************************************************************/
string Circle::output() {
    return "Circle with center at (" + to_string(x) + ", " + to_string(y) + ") and radius " + to_string(radius);
}