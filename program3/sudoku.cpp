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
    int random_num, random_row, random_column;
    int i, j;
    int is_set = 0;
    for(i=0; i<9; i++){
        for(j=0; j<9; j++){
            array[i][j] = '*';
        }
    }
    for(i=0; i < n; i++){
        is_set = 0;
        while(!is_set){
            random_num = rand() % 10;
            random_row = rand() % 9;
            random_column = rand() % 9;
            if(
                !already_inhabited(random_num, random_row, random_column) &&
                !row_violations(random_num, random_row, random_column) &&
                !column_violations(random_num, random_row, random_column) &&
                !box_violations(random_num, random_row, random_column)
            ){
                // cout << random_row << "  " << random_column << "  " << random_num << endl;
                array[random_row][random_column] = char(random_num + 48);
                is_set = 1;
            }else{
                // cout << "Hello";
            }
        }
    }
    printGrid();


}

void Sudoku::printGrid(){
    int i, j;
    cout << endl;
    for(i=0; i<9; i++){
        for(j=0; j<9; j++){
            cout << " " << array[i][j] << " ";
            if((j==2) || (j==5)){
                cout << " |";
            } 
        }
        cout << endl;
        if((i==2) || (i==5)){
            cout << "----------+----------+---------" << endl;
        } 
    }
    cout << "\n" << endl;
}

int Sudoku::solve() {
    int solvable = 0;




    return solvable;
}



int Sudoku::already_inhabited(int num, int row, int column){
    int violation = 0;
    if(
        int(array[row][column]) !=  '*'
    ){
        violation = 1;
    }
    return violation;
}

int Sudoku::row_violations(int num, int row, int column){
    int violation = 0;
    int current_column;
    for(current_column = 0; current_column < 9; current_column++){
        if(num+48 == int(array[row][current_column])){
            violation = 1;
        }
    }
    return violation;
}

int Sudoku::column_violations(int num, int row, int column){
    int violation = 0;
    int current_row;
    for(current_row = 0; current_row < 9; current_row++){
        if(num+48 == int(array[current_row][column])){
            violation = 1;
        }
    }
    return violation;
}
int Sudoku::box_violations(int num, int row, int column) { 
    int violation = 0;
    int column_box, row_box;
    int i,j;
    char dead;
    column_box = column/3;
    row_box = row/3;
    // cout << row << " "<< column << " " << num << endl;
    // cout << row_box << " "<< column_box << " " << endl;
    // cin >> dead;
    for(i=row_box*3; i < row_box*3 + 3; i++){
        for(j=column_box*3; j < column_box*3 + 3; j++){
            if(int(array[i][j]) == num+48){
                violation = 1;
            }
        }
    }
    return violation;
}