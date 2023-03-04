/*******************************************************************
*Summary:
    This class keeps a constant fractional number and has methods of
    preforming operations on the current fraction 
*******************************************************************/

#ifndef RATIONAL_H
#define RATIONAL_H

class Rational {
    private:
        int current_n, current_d;
        void reduce();
        int gcd(int n, int d);
    public:
        Rational(int numerator, int denominator);
        void add(int n, int d);
        void sub(int n, int d);
        void mul(int n, int d);
        void div(int n, int d);
        void print_number();
};

#endif