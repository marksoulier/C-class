#include <iostream>
#include "Sudoku.h"
using namespace std;


/*******************************************************************
 * @name Sudoku
 * @brief this constructs the sudoku board with random numbers specified by the user
 * @param a number of random numbers
 * @retval 2 filled arrays of the randomly generated numbers without violating sudoku rules
*******************************************************************/
Sudoku::Sudoku(int n) {
    srand (time(NULL));
    int random_num, random_row, random_column;
    int i, j;
    int is_set = 0;
    for(i=0; i<9; i++){
        for(j=0; j<9; j++){
            array[i][j] = '*';
            solved_array[i][j] = '*';
        }
    }
    for(i=0; i < n; i++){
        is_set = 0;
        while(!is_set){
            random_num = rand() % 9 + 1;
            random_row = rand() % 9;
            random_column = rand() % 9;
            if(
                !already_inhabited(random_num, random_row, random_column) &&
                !row_violations(random_num, random_row, random_column) &&
                !column_violations(random_num, random_row, random_column) &&
                !box_violations(random_num, random_row, random_column)
            ){
                array[random_row][random_column] = char(random_num + 48);
                solved_array[random_row][random_column] = char(random_num + 48);
                is_set = 1;
            }
        }
    }
    printGrid();


}

/*******************************************************************
 * @name printGrid
 * @brief this constructs the sudoku board with random numbers specified by the user
 * @param a number of random numbers
 * @retval 2 filled arrays of the randomly generated numbers without violating sudoku rules
*******************************************************************/
void Sudoku::printGrid(){
    int i, j;
    for(i=0; i<9; i++){
        for(j=0; j<9; j++){
            cout << " " << array[i][j] << " ";
            if((j==2) || (j==5)){
                cout << "|";
            } 
        }
        cout << endl;
        if((i==2) || (i==5)){
            cout << "---------+---------+---------" << endl;
        }
        // }else{
        //     cout << "          |          |          " << endl;
        // }
    }
    cout << "\n" << endl;
}

/*******************************************************************
 * @name solve
 * @brief this attempts to solve the sudoku problem using backtracking algorithms
 * @param none
 * @retval a ture or false in the form of a int of if the sudoku board is solvable. 
 * Also inputs solved values in array
*******************************************************************/
int Sudoku::solve() {
    int number = 1;
    int row = 0;
    int column = 0;
    char throwing;
    int flag = 0;

    //find first value
    while(flag == 0){
        if(array[row][column] == '*'){
            flag = 1;
        }else{
            column += 1;
            if(column >= 9){
                column = 0;
                row += 1;
            }
        }
    }
    flag = 0;
    while(true){
        //if no violations
        if(
            !row_violations(number, row, column) &&
            !column_violations(number, row, column) &&
            !box_violations(number, row, column)){
            //place number into suduku
            array[row][column] = number + 48;
            //if the number placed
            number = 1;
            //next position
            while(flag == 0){
                column += 1;
                if(column >= 9){
                    column = 0;
                    row += 1;
                }
                //check for fixed
                if(solved_array[row][column] == '*'){
                    flag = 1;
                }
                if(column == 0 && row == 9)
                {
                    return 1;
                }
            }
            flag = 0;
        }else{
            number += 1;
            if(number == 10){
                array[row][column] = '*';
                //previous place
                while(flag == 0){
                    column -= 1;
                    if(column < 0){
                        column = 8;
                        row -= 1;
                    }
                    //check for fixed
                    if(solved_array[row][column] == '*'){
                        flag = 1;
                    }
                    if(column == 8 && row == -1)
                    {
                        return 0;
                    }
                }
                flag = 0;
                number = int(array[row][column] - 48) + 1;
                if(number == 10){
                    number = 9;
                }
                }
    
            }      
        }
    }

/*******************************************************************
 * @name already_inhabited
 * @brief this checks to see if there already exists a value in the grid place
 * @param a number, row, and column
 * @retval a true or false in the form of a int if there already exists a value other than *
*******************************************************************/
int Sudoku::already_inhabited(int num, int row, int column){
    int violation = 0;
    if(
        (int(array[row][column]) !=  '*') ||
        (int(solved_array[row][column]) !=  '*')
    ){
        violation = 1;
    }
    return violation;
}

/*******************************************************************
 * @name row_violations
 * @brief this checks to see if there already exists a value the same in the row
 * @param a number, row, and column
 * @retval a true or false in the form of a int if there already exists the same value in the same row
*******************************************************************/
int Sudoku::row_violations(int num, int row, int column){
    int violation = 0;
    int current_column;
    for(current_column = 0; current_column < 9; current_column++){
        if((num+48 == int(array[row][current_column])) || 
            (num+48 == int(solved_array[row][current_column]))){
            violation = 1;
        }
    }
    return violation;
}

/*******************************************************************
 * @name column_violations
 * @brief this checks to see if there already exists a value the same in the column
 * @param a number, row, and column
 * @retval a true or false in the form of a int if there already exists the same value in the same column
*******************************************************************/
int Sudoku::column_violations(int num, int row, int column){
    int violation = 0;
    int current_row;
    for(current_row = 0; current_row < 9; current_row++){
        if((num+48 == int(array[current_row][column])) ||
        (num+48 == int(solved_array[current_row][column]))){
            violation = 1;
        }
    }
    return violation;
}

/*******************************************************************
 * @name box_violations
 * @brief this checks to see if there already exists a value the same in the box
 * @param a number, row, and column
 * @retval a true or false in the form of a int if there already exists the same value in the same box
*******************************************************************/
int Sudoku::box_violations(int num, int row, int column) { 
    int violation = 0;
    int column_box, row_box;
    int i,j;
    char dead;
    //calculate which square it is in
    column_box = column/3;
    row_box = row/3;
    for(i=row_box*3; i < row_box*3 + 3; i++){
        for(j=column_box*3; j < column_box*3 + 3; j++){
            if((int(array[i][j]) == num+48) ||
            (int(solved_array[i][j]) == num+48)){
                violation = 1;
            }
        }
    }
    return violation;
}