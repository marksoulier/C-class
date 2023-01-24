/*******************************************************************
 * @name main
 * @brief Calculate the square root of 3 coefficents using the quadratic formula
 * @param a input file containing 3 coefficents a, b, and c on seperate lines
 * @retval output to file if specified or to terminal if not specified
*******************************************************************/
#include <iostream>
#include <fstream>
#include <string>
#include <cmath>
#include <iomanip>
using namespace std;

void quadraticFormula(float a, float b, float c, float& x1, float& x2, int& is_complex, int& is_zero);

int main(int argc, char *argv[]){
//declare variables
    float a, b, c;
    float x1, x2;
    int is_complex, is_zero;
    ifstream file_in;

// open input file
    file_in.open(argv[1], ios::in);
    if (!(file_in.good()))
    {
        cout << "Unable to open input file " << argv[1] << "." << endl;
        return 0;
    }

//open output file
    ofstream file_out;
    if (argc != 2){
        file_out.open(argv[2], ios::out);
        if (!(file_in.good()))
        {
            cout << "Unable to open output file " << argv[2] << "." << endl;
            return 0;
        }
    }
// take in first elements
    file_in >> a;
    file_in >> b;
    file_in >> c;

//loop through file printing to output and reading from in
    while(!(file_in.eof())){
        is_complex = 0;
        is_zero = 0;
        
// get roots and errors if problem
        quadraticFormula(a, b, c, x1, x2, is_complex, is_zero);

//write to file or to terminal
        if (argc > 2){
            if ((is_complex == 1)){
                file_out << a << "\t" << b << "\t" << c << "\t" << "complex" << endl;
            }else if(is_zero == 1){
                file_out << a << "\t" << b << "\t" << c << "\t" << "DNE" << endl;
            }
            else{
                file_out << a << "\t" << b << "\t" << c << "\t";
                file_out << fixed << setprecision(4) << x1 << "\t" << x2 << fixed << setprecision(0) << "\t" << endl;
            }
        }else{
            if (is_complex == 1){
                cout << a << "\t" << b << "\t" << c << "\t" << "complex" << endl;
            }else if(is_zero == 1){
                cout << a << "\t" << b << "\t" << c << "\t" << "DNE" << endl;
            }
            else{
                cout << a << "\t" << b << "\t" << c << "\t";
                cout << fixed << setprecision(4) << x1 << "\t" << x2 << fixed << setprecision(0) << "\t" << endl;
            }
        }
    
// read file from a, b, c
        file_in >> a;
        file_in >> b;
        file_in >> c;
    }
    return 0;
}


/*******************************************************************
 * @name quadraticFormula
 * @brief takes in 3 coefficents and 2 x variables to calculate the quadratic squares
 * @param a, b, c, x1, x2, is_complex, is_zero
 * @retval changed x1, x2
*******************************************************************/

void quadraticFormula(float a, float b, float c, float& x1, float& x2, int& is_complex, int& is_zero)
{
    float d;
    float first_part, second_part;

    //calculate the determinate
    d = b*b - 4*a*c;

    // give error for divide by 0
    if (a == 0){
        is_zero = 1;
        return;
    }

    //if not complex calculate roots
    if (d >= 0){
        first_part = -b / (2 * a);
        second_part = sqrt(d)/(2 * a);
        x1 = first_part + second_part;
        x2 = first_part - second_part;
    }   
    else{
        is_complex = 1;
    }
}