/*******************************************************************
 * @name main
 * @brief Description
 * @param none
 * @retval none
*******************************************************************/

#include <iostream>
#include <fstream>
#include <string>
#include <cmath>
#include <iomanip>
#include "Rational.h"
using namespace std;


int main(void){
    int numerator, denominator;
    int request = 1;

    cout << "Enter numerator: " << endl;
    cin >> numerator;
    cout << "Enter denominator: " << endl;
    cin >> denominator;

    Rational rational(numerator,denominator);

    cout << "Fraction reduces to ";
    rational.print_number();

    while(request != 0){
        cout << "1. Add a rational" << endl;
        cout << "2. Subtract a rational" << endl;
        cout << "3. Multiply by a rational" << endl;
        cout << "4. Divide by a rational" << endl;
        cout << "0. Exit" << endl;

        cout << "Enter selection: " << endl;
        cin >> request;

        try {
            if(request > 4 || request < 0){
                throw request;
            };
        cout << "Enter numerator: " << endl;
        cin >> numerator;
        cout << "Enter denominator: " << endl;
        cin >> denominator;
        switch (request){
            case 1:
                rational.add(numerator, denominator);
                break;
            case 2:
                rational.sub(numerator, denominator);
                break;
            case 3:
                rational.mul(numerator, denominator);
                break;
            case 4:
                rational.div(numerator, denominator);
                break;
            default:
                break;
            }
        rational.print_number();
        }
        catch(int request){
                    cout << "Sorry incorrect request: " << request << "not a valid request" << endl;
                };
    }
    return 0;
}