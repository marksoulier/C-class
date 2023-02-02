#include <iostream>
#include "Sudoku.h"
using namespace std;


/*******************************************************************
 * @name Rational   
 * @brief is the constuctor of the class that takes in the initial
 * fraction and reduces it to simpilist terms
 * @param a numerator and a denominator of a fraction
 * @retval updates the class parameter numerator and denominator
*******************************************************************/
Sudoku::Sudoku(int n) {
    srand (time(NULL));
    int random_num;


    random_num = rand() % 10;

    cout << random_num;

}

void Sudoku::printGrid(){

    cout << "----------";
}

int Sudoku::solve() {
    int solvable = 0;




    return solvable;
}