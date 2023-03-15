#include "circle.h"


/*******************************************************************
 * @name Circle
 * @brief inicializes the x and y corrdinates of the circle with its radius
 * @param x and y corrdinates of the point and its radius
 * @retval returns nothing
*******************************************************************/
Circle::Circle(float radius, float x_cord, float, y_cord) {
    r = radius;
    x = x_cord;
    y = y_cord;
}

/*******************************************************************
 * @name opperator overload of <<
 * @brief prints out this statment to the stream when called apon
 * @param the stream it is sent to and the class
 * @retval the stream os
*******************************************************************/
ostream& Circle::operator<<(ossteam& os, const Circle& c) {
    os << "Circle with center = (" << c.x << "," << c.y << ")" << "); Radius = " << c.r << "; Area = "  << 2 * math.py * c.r << endl;
    return os
}