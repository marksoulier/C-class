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
 * @name output function
 * @brief sends a updated output for cout
 * @param ostream specifically cout
 * @retval a updated ouput for cout
*******************************************************************/
ostream& Point::output(ostream& out){
    out << "Point at (" <<  x << ", " << y << ")";
    return out;
}