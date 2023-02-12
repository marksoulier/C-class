/*******************************************************************
 * @name main
 * @brief This function produces a random sudoku board and attempts to solve it if possible
 * @param takes in number of initial entries from the user
 * @retval returns a solved suduku board if solved or a statment if unsolved
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

//create sudoku board

 Sudoku s(n); 

//attempt to solve board
if (s.solve()) { 
  cout << "Solved!" << endl; 
  s.printGrid();
 } 
 else { 
  cout << "Sorry, unsolvable..." << endl; 
 } 
  
 return 0; 
} 