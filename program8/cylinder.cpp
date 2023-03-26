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
 * @brief creates a string of the output to the screen
 * @param none
 * @retval a string of the correct output
*******************************************************************/
string Cylinder::output() {
    return "Cylinder with base at (" + to_string(x) + ", " + to_string(y) + ") and radius " + to_string(r) + " and height " + to_string(h);
}