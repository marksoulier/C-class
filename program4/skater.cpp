#include <iostream>
#include "skater.h"
using namespace std;


/*******************************************************************
 * @name Skater
 * @brief construct a node by inicilizing the values of country and score
 * and set the next to null for now
 * @param country and score
 * @retval setting country, score, and next to corresponding values
*******************************************************************/
Skater::Skater(string c, float s) {
    country = c;
    score = s;
    next = nullptr;
}


/*******************************************************************
 * @name getCountry
 * @brief return the country of the node
 * @param none
 * @retval the country of the node
*******************************************************************/
string Skater::getCountry() {
    return country;
}

/*******************************************************************
 * @name getScore
 * @brief return the score of the node
 * @param none
 * @retval the score of the node
*******************************************************************/
float Skater::getScore(){
    return score;
}


/*******************************************************************
 * @name getNext
 * @brief returns class pointer to next node or bottem of the list
 * @param none
 * @retval pointer to next node or bottem of the list
*******************************************************************/
Skater* Skater::getNext(){
    return next;
}

/*******************************************************************
 * @name setNext
 * @brief sets the next pointer to the next linked node or bottem of linked list
 * @param pointer to next node or bottem of linked list
 * @retval set class var of next to the given pointer
*******************************************************************/
void Skater::setNext(Skater *p){
    next = p;
}
