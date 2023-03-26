#include "point.h"


/*******************************************************************
 * @name Point
 * @brief inicializes the x and y corrdinates of the point
 * @param x and y corrdinates of the point
 * @retval returns nothing
*******************************************************************/
Point::Point(float x_cord, float y_cord): Shape() {
    x = x_cord;
    y = y_cord;
}

/*******************************************************************
 * @name opperator overload of <<
 * @brief prints out this statment to the stream when called apon
 * @param the stream it is sent to and the class
 * @retval the stream os
********************************************************************/
string Point::output(){
    return return "Point at (" + to_string(x) + ", " + to_string(y) + ")";
}
