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
 * @brief creates a string of the output to the screen
 * @param none
 * @retval a string of the correct output
*******************************************************************/
string Point::output(){
    return "Point at (" + to_string(x) + ", " + to_string(y) + ")";
}