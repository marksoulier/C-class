#include <iostream>
#include <fstream>
#include <cmath>
#include <string>
#include <iomanip>
#include <time.h>
using namespace std;

class Sudoku {
public:
	Sudoku(int n);
	int Solve();
	void PrintGrid();

private:
	int Board[9][9];
	int FixedBoard[9][9];
	int TestRow(int val, int y);
	int TestColumn(int val, int x);
	int TestBox(int val, int x, int y);
	int AlreadyFilled(int x, int y);

	int* findFirst(int &x, int &y);
	int* findNext(int &x, int &y);
	int* findPrevious(int &x, int &y);
	
};
