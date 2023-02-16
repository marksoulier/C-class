/*******************************************************************
*Summary:
    This class makes a node containing the country name and score 
    and a pointer to the next node
*******************************************************************/

#ifndef SKATER_H
#define SKATER_H

#include <iostream>
#include <fstream>
#include <string>
#include <cmath>
#include <iomanip>
using namespace std;

class Skater { 
    private: 
        string country; 
        float score; 
        Skater* next; 

    public: 
        Skater(string c, float s); 
        string getCountry(); 
        float getScore(); 
        Skater *getNext();
        void setNext(Skater *p); 
};

#endif