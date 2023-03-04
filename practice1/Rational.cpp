#include <iostream>
#include "Rational.h"
using namespace std;


/*******************************************************************
 * @name Rational   
 * @brief is the constuctor of the class that takes in the initial
 * fraction and reduces it to simpilist terms
 * @param a numerator and a denominator of a fraction
 * @retval updates the class parameter numerator and denominator
*******************************************************************/
Rational::Rational(int numerator, int denominator) {
    current_n = numerator;
    current_d = denominator;
    Rational::reduce();
}


/*******************************************************************
 * @name print_number 
 * @brief print out the fraction stored
 * @param none
 * @retval void
*******************************************************************/
void Rational::print_number() {

    cout << current_n << "/" << current_d << endl;

}


/*******************************************************************
 * @name add
 * @brief add a new fraction to the currently stored fraction
 * @param a numerator and a denominator of a fraction
 * @retval a reduced and strored fraction in the class parameter 
*******************************************************************/
void Rational::add(int n, int d) {
    int new_n, new_d;

//add the two fractions
    new_n = d * current_n + n * current_d;
    new_d = d * current_d;

    current_n = new_n;
    current_d = new_d;

//reduce
    Rational::reduce();
}


/*******************************************************************
 * @name sub
 * @brief subtract a new fraction to the currently stored fraction
 * @param a numerator and a denominator of a fraction
 * @retval a reduced and strored fraction in the class parameter 
*******************************************************************/
void Rational::sub(int n, int d) {
    int new_n, new_d;

//subtract the two fractions
    new_n = current_n * d - n * current_d;
    new_d = d * current_d;

    current_n = new_n;
    current_d = new_d;

//reduce
    Rational::reduce();
}


/*******************************************************************
 * @name mul
 * @brief multiply a new fraction to the currently stored fraction
 * @param a numerator and a denominator of a fraction
 * @retval a reduced and strored fraction in the class parameter 
*******************************************************************/
void Rational::mul(int n, int d) {
    int new_n, new_d;
    new_n = current_n * n;
    new_d = current_d * d;

    current_n = new_n;
    current_d = new_d;

//reduce
    Rational::reduce();
}


/*******************************************************************
 * @name div
 * @brief divide a new fraction to the currently stored fraction
 * @param a numerator and a denominator of a fraction
 * @retval a reduced and strored fraction in the class parameter  
*******************************************************************/
void Rational::div(int n, int d) {

//copy dot flip and then mltiply the two
    Rational::mul(d, n);
}


/*******************************************************************
 * @name reduce
 * @brief reduces the currently stored fraction to simplist terms
 * @param none
 * @retval a reduced and strored fraction in the class parameter 
*******************************************************************/
void Rational::reduce() {
    int new_n, new_d;
    int gcd_num;

//calculate the gcd
    gcd_num = Rational::gcd(current_n, current_d);

//divide the top and bottem by the gcd
    new_d = current_d / gcd_num;
    new_n = current_n / gcd_num;
    current_d = new_d;
    current_n = new_n;
}

/*******************************************************************
 * @name gcd
 * @brief this function is recursive and calculates the greatest common 
 * factor of the two
 * @param takes in 2 positive integers
 * @retval the greastest common denominator of the two numbers
*******************************************************************/
int Rational::gcd(int num1, int num2){

    if(num1 > num2){
        Rational::gcd(num1-num2, num2);
    }else if(num2 > num1){
        Rational::gcd(num1, num2-num1);
    }else if(num1 == num2) {
        return num1;
    };
}