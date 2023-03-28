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
#include "shape.h"
using namespace std;

int main()
{
  Shape *s[3];
  Point p(4,4); // x coordinate, y coordinate
  Circle c(5,5,5); // x, y, radius
  Cylinder y(6, 6, 6, 6); // x, y, r, height

  s[0] = &p;
  s[1] = &c;
  s[2] = &y;
  
  cout << *(s[0]) << endl << endl;
  cout << *(s[1]) << endl << endl;
  cout << *(s[2]) << endl << endl;
  return 0;
}
