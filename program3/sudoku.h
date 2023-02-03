/*******************************************************************
*Summary:
    This class produces and solves Sudoku games
*******************************************************************/

#ifndef RATIONAL_H
#define RATIONAL_H

class Sudoku {
    private:
        char array[9][9];
        int already_inhabited(int num, int row, int column);
        int row_violations(int num, int row, int column);
        int column_violations(int num, int row, int column);
        int box_violations(int num, int row, int column);
    public:
        Sudoku(int n);
        void printGrid();
        int solve();
};

#endif