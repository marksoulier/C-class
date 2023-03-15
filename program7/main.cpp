/*******************************************************************
 * @name main
 * @brief This function creat
 * @param takes in the country and score from the user
 * @retval returns the scores in decending order if asked
*******************************************************************/
#include <iostream>
#include "point.h"
#include "circle.h"
#include "cylinder.h"
using namespace std;

int main()
{
  Point p(4,4); // x coordinate, y coordinate
  Circle c(5,5,5); // x, y, radius
  Cylinder y (6, 6, 6, 6); // x, y, r, height
  cout << p << endl << endl;
  cout << c << " " << endl << (Point) c << endl << endl;
  cout << y << " " << endl << (Circle) y << " " << endl << (Point) y
        << endl << endl;
  return 0;
}
