/*******************************************************************
*Summary:
    This class is an abstract class of Shape that is used to point to the other classes
*******************************************************************/

#ifndef SHAPE_H
#define SHAPE_H

#include <iostream>
#include <fstream>
#include <string>
#include <cmath>
#include <iomanip>
using namespace std;

class Shape { 
    protected:  
        
    public: 
        Shape() {}
        virtual string output() const = 0; 
        friend ostream& operator<<(ostream &output, const Shape*& p);
};

#endif


/*******************************************************************
 * @name opperator overload of <<
 * @brief prints out this statment to the stream when called apon
 * @param the stream it is sent to and the class
 * @retval the stream os
*******************************************************************/
ostream &operator<<(ostream& output, const Shape*& p) {
    output << p->output();
    return output;
};