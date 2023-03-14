/*******************************************************************
 * @name main
 * @brief This function creates a linked list of scores in the olympic skating competition
 * @param takes in the country and score from the user
 * @retval returns the scores in decending order if asked
*******************************************************************/
#include "MyComplex.h" 

int main() 
{ 
  MyComplex a(-3.0, 2.5); 
  MyComplex b(1.2, 4.4); 
  MyComplex c;

  // a.printMyComplex();
  // b.printMyComplex(); 

  c = a + b;

  c.printMyComplex();

  c = a - b;

  c.printMyComplex();

  c = a * b;

  c.printMyComplex();

  c = a / b;

  c.printMyComplex();

 return 0; 
} 