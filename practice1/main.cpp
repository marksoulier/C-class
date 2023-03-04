/*******************************************************************
 * @name main
 * @brief This function has the user add / subtract / multiply / divide
 *  fractions and returns its simplified answer
 * @param takes in fractions in the form of a numerator and denominator and a opperation
 * @retval returns a fraction in the most simplified form
*******************************************************************/


#include <fstream>
#include <string>
#include <cmath>
#include <iomanip>
#include "Rational.h"
using namespace std;


int main(void){
    int numerator, denominator;
    char request = '1';

    cout << "Hello" << endl;
    Rational rational(numerator, denominator);
    rational.print_number();
    
    return 0;
}