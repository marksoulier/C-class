/*******************************************************************
*Summary:
    This class makes a linked list of Skater nodes.
*******************************************************************/

#ifndef LIST_H
#define LIST_H

#include <iostream>
#include <fstream>
#include <string>
#include <cmath>
#include <iomanip>
#include "skater.h"
using namespace std;

class List { 
    private: 
        Skater *head;

    public: 
        List(); 
        void addNode(string country, float score); 
        void printList();
        ~List();
}; 

#endif