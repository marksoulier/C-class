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
#include "Rational.h"
using namespace std;


int main(void){
    int numerator, denominator;
    char request = '1';

// take in the first numerator and denominator
    cout << "Enter numerator: ";
    cin >> numerator;
    cout << "Enter denominator: ";
    cin >> denominator;

//declare variable of class Rational
    Rational rational(numerator, denominator);

    cout << "Fraction reduces to ";
    rational.print_number();

//create loop that continues until the user exits
    while(request != 0){

//print options of opperations
        cout << "\n" << endl;
        cout << "1. Add a rational" << endl;
        cout << "2. Subtract a rational" << endl;
        cout << "3. Multiply by a rational" << endl;
        cout << "4. Divide by a rational" << endl;
        cout << "0. Exit" << endl;

//take in a selection
        cout << "Enter selection: ";
        cin >> request;

// see if seletion was valid
        try {
            if((int) request == 48){
                exit(0);
            }
            if((int) request > 52 || (int) request < 48){
                throw request;
            };

//have the user input the numerator and denominator of the new fraction
        cout << "Enter numerator: ";
        cin >> numerator;
        cout << "Enter denominator: ";
        cin >> denominator;

//preform the desired action
        switch (request){
            case '1':
                rational.add(numerator, denominator);
                break;
            case '2':
                rational.sub(numerator, denominator);
                break;
            case '3':
                rational.mul(numerator, denominator);
                break;
            case '4':
                rational.div(numerator, denominator);
                break;
            default:
                cout << "Error" << endl;
                break;
            }

//print new reduced fraction
        rational.print_number();
        }
// throw error for invalid selection
        catch(char request){
                    cout << "Sorry incorrect request: " << request << " not a valid request" << endl;
                };
    }
    return 0;
}