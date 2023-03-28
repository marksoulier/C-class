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
 * @brief sends a updated output for cout
 * @param ostream specifically cout
 * @retval a updated ouput for cout
*******************************************************************/
ostream& Circle::output(ostream& out) {
    out << "Circle with center at = (" << x <<", " << y << "); and Radius = " << r << ";";
    out << " Area = " << M_PI*r*r;
    return out;
};