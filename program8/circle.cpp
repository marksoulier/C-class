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
 * @name output function
 * @brief creates a string of the output to the screen
 * @param none
 * @retval a string of the correct output
*******************************************************************/
string Circle::output() {
    return "Circle with center at (" + to_string(x) + ", " + to_string(y) + ") and radius " + to_string(r);
}