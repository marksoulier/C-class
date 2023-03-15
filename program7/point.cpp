#include "point.h"


/*******************************************************************
 * @name Point
 * @brief inicializes the x and y corrdinates of the point
 * @param x and y corrdinates of the point
 * @retval returns nothing
*******************************************************************/
Point::Point(float x_cord, float y_cord) {
    x = x_cord;
    y = y_cord;
}

/*******************************************************************
 * @name opperator overload of <<
 * @brief prints out this statment to the stream when called apon
 * @param the stream it is sent to and the class
 * @retval the stream os
*******************************************************************/
ostream& Point::operator<<(ossteam& os, const Point& p) {
    os << "Point at (" << p.x << "," << p.y << ")" << endl;
    return os
}