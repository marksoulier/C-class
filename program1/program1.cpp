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
using namespace std;

void quadraticFormula(float a, float b, float c, float& x1, float& x2, int& is_complex);

int main(int argc, char *argv[]){
    float a, b, c;
    float x1, x2;
    int is_complex;
    ifstream file_in;
    file_in.open(argv[1], ios::in);
    if (!(file_in.good()))
    {
        cout << "Unable to open input file " << argv[1] << "." << endl;
        return 0;
    }

    ofstream file_out;
    if (argc != 2){
        file_out.open(argv[2], ios::out);
        if (!(file_in.good()))
        {
            cout << "Unable to open output file " << argv[2] << "." << endl;
            return 0;
        }
    }

    while(!(file_in.eof())){
        is_complex = 0;

        file_in >> a;
        file_in >> b;
        file_in >> c;
        // read file a, b, c

        quadraticFormula(a, b, c, x1, x2, is_complex);

        //write to file or to terminal
        if (argc > 2){
            if ((is_complex == 0)){
                file_out << a << "\t" << b << "\t" << c << "\t";
                file_out << fixed << setprecision(4) << x1 << "\t" << x2 << fixed << setprecision(0) << "\t" << endl;
            }else{
                file_out << a << "\t" << b << "\t" << c << "\t" << "complex" << endl;
            }
        }else{
            if ((is_complex == 0)){
                cout << a << "\t" << b << "\t" << c << "\t";
                cout << fixed << setprecision(4) << x1 << "\t" << x2 << fixed << setprecision(0) <<  "\t" << endl;
            }else{
                cout << a << "\t" << b << "\t" << c << "\t" << "complex" << endl;
            }
        }
    }
    return 0;
}


/*******************************************************************
 * @name quadraticFormula
 * @brief takes in 3 coefficents and 2 x variables to calculate the quadratic squares
 * @param a, b, c, x1, x2
 * @retval a changed x1, x2
*******************************************************************/

void quadraticFormula(float a, float b, float c, float& x1, float& x2, int& is_complex)
{
    float d;
    float first_part, second_part;
    d = b*b - 4*a*c;
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