#include "sudoku.h"
/*********************
@name Sudoku::Sudoku 
@brief	Constructs the board with random integers
@param	Number of integers
@retval	grid of Sudoku
*********************/
Sudoku::Sudoku(int n) {
	srand(time(NULL));
	int Counter = 0;
	int Slot, Row, Column, X, Y;
	for (Y = 0; Y < 9; Y++) {
		for (X = 0; X < 9; X++) {
			Board[X][Y] = 0;
			FixedBoard[X][Y] = 0;
		}
	}
	while (Counter < n) {
		Slot = rand() % 9 + 1;
		Row = rand() % 9;
		Column = rand() % 9;
		if (TestBox(Slot, Row, Column) != 0 &&
			TestColumn(Slot, Row) != 0 &&
			TestRow(Slot, Column) != 0 &&
			AlreadyFilled(Row, Column) != 0)
		{
			
			Board[Row][Column] = Slot;
			FixedBoard[Row][Column] = Slot;
			Counter += 1;
		}
	}
	PrintGrid();
	cout << endl;
}
/*********************
@name	Violations
@brief Determines if there are any violations with the Sudoku
and prints a valid solution if there is one
@param none
@retval	none
*********************/
int Sudoku::Solve() {
	
	
	int n = 1, x, y, z;
	int* First = findFirst(x, y);
	y = First[0];
	x = First[1];
	
	while (true) {

		if (TestBox(n, x, y) != 0 &&
			TestColumn(n, y) != 0 &&
			TestRow(n, x) != 0) {
			
			Board[y][x] = n;
			n = 1;
			int *Next = findNext(x, y);
			y = Next[0];
			x = Next[1];
			delete[] Next;
			if (x == 9 && y == 8) {
				return 1;
			}
		}
		else {
			n = n + 1;
			if (n == 10) {
				Board[y][x] = 0;
				int* Previous = findPrevious(x, y);
				y = Previous[0];
				x = Previous[1];
				delete[] Previous;

				if (x == -100 && y == -100) {
					return 0;
				}
				else {
					n = Board[y][x] + 1;
					if (n == 10) {
						n = 9;
					}
				}
				
			}
		}
	}
	delete[] First;
	
}


void Sudoku::PrintGrid() {
	int x=0, y=0; 
	for (y = 0; y < 9; y++) {
		for (x = 0; x < 9; x++) {
			if (Board[y][x] == 0) {
				cout << "*" << "  ";
			}
			else {
				cout << Board[y][x] << "  ";
			} 
			if (x == 2 || x == 5) {
				cout << "|";
			}
			if (x == 8) {
				cout << endl;
			}
		}
		if (y == 2 || y == 5) {
			cout << "---------+---------+-------" << endl;
		}
	}

}

int Sudoku::TestBox(int val, int x, int y) {
	int mincol, maxcol, minrow, maxrow;
	mincol = (y / 3) * 3;
	maxcol = mincol + 2;
	minrow = (x / 3) * 3;
	maxrow = minrow + 2;
	int i, j;
	for (j = minrow; j <= maxrow; j++) {
		for (i = mincol; i <= maxcol; i++) {
			if (Board[i][j] == val) {
				return 0;
			}
		}
	}
	return 1;
}

int Sudoku::TestColumn(int val, int x) {
	int i = 0;
	while (i < 9) {
		if (Board[x][i] == val) {
			return 0;
		}
		i += 1;
	}
	return 1;
}

int Sudoku::TestRow(int val, int y) {
	int i = 0;
	while (i <9) {
		if (Board[i][y] == val) {
			return 0;
		}
		i += 1;
	}
	return 1;
}

int Sudoku::AlreadyFilled(int x, int y) {
	if (Board[x][y] != 0) {
		return 0;
	}
	else {
		return 1;
	}
	
}
int* Sudoku::findFirst(int &x, int &y) {
	int* FirstCoords = new int[2];
	for (y = 0; y < 9; y++) {
		for (x = 0; x < 9; x++) {
			if (FixedBoard[y][x] == 0) {
				FirstCoords[0]= y;
				FirstCoords[1] = x;
				return FirstCoords;
			}
		}
	}
	delete[] FirstCoords;
}



int* Sudoku::findNext(int &x, int &y) {
	int* NextCoords= new int[2];
	for (y = 0; y < 9; y++) {
		for (x = 0; x < 9; x++) {
			
			if (Board[y][x] == 0) {
				NextCoords[0] = y;
				NextCoords[1] = x;
				return NextCoords;
			}
			
		}
		
	}
	NextCoords[0] = 8;
	NextCoords[1] = 9;
	return NextCoords;
	delete[] NextCoords;
}


int* Sudoku::findPrevious(int &x, int &y) {
	int* PreviousCoords = new int[2];
	while (!(x == 0 && y == 0)) {
		if (x == 0) {
			x = 8;
			y -= 1;
		}
		else {
			x -= 1;
		}
		if (FixedBoard[y][x] == 0) {
			PreviousCoords[0] = y;
			PreviousCoords[1] = x;
			return PreviousCoords;
		}
	}
	PreviousCoords[0] = -100;
	PreviousCoords[1] = -100;
	return PreviousCoords;
	
	delete[] PreviousCoords;
}
