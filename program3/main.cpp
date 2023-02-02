/*******************************************************************
 * @name main
 * @brief This function has the user add / subtract / multiply / divide
 *  fractions and returns its simplified answer
 * @param takes in fractions in the form of a numerator and denominator and a opperation
 * @retval returns a fraction in the most simplified form
*******************************************************************/

#include <iostream>
#include <fstream>
#include <string>
#include <cmath>
#include <iomanip>
using namespace std;


#include "sudoku.h" 
#include <iostream> 
 
using namespace std; 
 
int main() 
{ 
 int n; 
  
 cout << "Welcome to SudokuSolver!!" << endl; 
 cout << "Enter number of squares to prepopulate: "; 
 cin >> n; 
  
 Sudoku s(n); 
  
if (s.solve()) { 
  cout << "Solved!" << endl; 
  s.printGrid();
 } 
 else { 
  cout << "Sorry, unsolvable..." << endl; 
 } 
  
 return 0; 
} 