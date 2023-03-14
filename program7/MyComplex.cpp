#include "MyComplex.h"


/*******************************************************************
 * @name MyComplex
 * @brief consturct a complex number made of a real and a imaginary part
 * @param the real and imaginary part of the complex number
 * @retval set the private variables to the corrisponsing values
*******************************************************************/
MyComplex::MyComplex(float rp, float ip) {
    real = rp;
    imaginary = ip;
}

/*******************************************************************
 * @name MyComplex
 * @brief consturct a complex number made of a real and a imaginary part
 * @param none
 * @retval 
*******************************************************************/
MyComplex::MyComplex() {
}

/*******************************************************************
 * @name printMyComplex
 * @brief print complex number
 * @param none
 * @retval a printed statment to the terminal of the complex number
*******************************************************************/
void MyComplex::printMyComplex(){

//set precesion to 1
    cout << std::fixed << std::setprecision(1);

//print + is imaginary is greater than 0
    if(imaginary > 0){
        cout << real << " + " << imaginary << "i" << endl;
    }else{
//print - is imaginary is less than 0
        imaginary = -imaginary;
        cout << real << " - " << imaginary << "i" << endl;
    }
}


/*******************************************************************
 * @name opperator overload of +
 * @brief add the two complex numbers together to produce another class with
 * the result
 * @param a MyComplex class type with filled in real and imagniary
 * @retval a MyComplex class type with the addition of the two classes
*******************************************************************/
MyComplex MyComplex::operator + (const MyComplex& param) {
    MyComplex new_complex;
    new_complex.real = real + param.real;
    new_complex.imaginary = imaginary + param.imaginary;
    return new_complex;
}

/*******************************************************************
 * @name opperator overload of -
 * @brief subtract the two complex numbers together to produce another class with
 * the result
 * @param a MyComplex class type with filled in real and imagniary
 * @retval a MyComplex class type with the subtraction of the two classes
*******************************************************************/
MyComplex MyComplex::operator - (const MyComplex& param) {
    MyComplex new_complex;
    new_complex.real = real - param.real;
    new_complex.imaginary = imaginary - param.imaginary;
    return new_complex;
}

/*******************************************************************
 * @name opperator overload of *
 * @brief multiply the two complex numbers together to produce another class with
 * the result
 * @param a MyComplex class type with filled in real and imagniary
 * @retval a MyComplex class type with the multiplication of the two classes
*******************************************************************/
MyComplex MyComplex::operator * (const MyComplex& param) {
    MyComplex new_complex;
//cross multiply the two numbers and add for i squared
    new_complex.real = ((real * param.real) - (imaginary * param.imaginary));
    new_complex.imaginary = (real * param.imaginary) + (imaginary * param.real);
    return new_complex;
}

/*******************************************************************
 * @name opperator overload of /
 * @brief divide the two complex numbers together to produce another class with
 * the result
 * @param a MyComplex class type with filled in real and imagniary
 * @retval a MyComplex class type with the division of the two classes
*******************************************************************/
MyComplex MyComplex::operator / (const MyComplex& param) {
    MyComplex new_complex;
//divide the two numbers and add for i squared
    new_complex.real = (real * param.real + imaginary * param.imaginary) /
    (pow(param.real,2) + pow(param.imaginary,2)) ;
    new_complex.imaginary = ((imaginary * param.real) - (real * param.imaginary)) /
    (pow(param.real,2) + pow(param.imaginary,2));
    return new_complex;
}