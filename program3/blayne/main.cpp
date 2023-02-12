/*********************
@name	main
@brief	Takes a number from user and implements it into
class Sudoku to calculate and attempt to solve a sudoku puzzle
@param	number of random integers
@retval	Prints either a solved grid or a failure to solve message
*********************/
#include "sudoku.h"

int main()
{
	int n;
	cout << "Welcome to SudokuSolver!!" << endl;
	cout << "Enter number of squares to prepopulate: ";
	cin >> n;
	cout << endl;
	Sudoku s(n);
	
	if (s.Solve() == 1) {
		cout <<endl<<endl<< "Solved!" << endl;
		s.PrintGrid();
	}
	else {
		cout << "Sorry, unsolvable..." << endl;
	}
	return 0;

}


