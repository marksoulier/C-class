#include <iostream>
#include "list.h"
using namespace std;


/*******************************************************************
 * @name List
 * @brief this constructs the List with the head inicilized at NULL
 * @param none
 * @retval the head is inicilized to null
*******************************************************************/
List::List() {
    head = nullptr;
}


/*******************************************************************
 * @name addList
 * @brief this adds a Node to the linked list by finding its ordered position
 * and adding a node of Skater class
 * @param the country and score
 * @retval a node insterted in to the ordered linked list
*******************************************************************/
void List::addNode(string country, float score){
    Skater *new_node;
    new_node = new Skater(country, score);
    
//check if memory was correctly allocated
    if (new_node == nullptr) {
        cout << "Error allocating memory" << endl;
    }

//check if it is the first element in the linked list
    if(head == nullptr || score > head->getScore()){
        new_node->setNext(head);
        head = new_node;
        return;
    }

//loop through list to find ordered position
    Skater *temp_current = head;
    Skater *temp_previous = nullptr;

    while((temp_current != nullptr) && (temp_current->getScore() >= score)){
        temp_previous = temp_current;
        temp_current = temp_current->getNext();
    }

//place new node in linked list
    new_node->setNext(temp_current);
    temp_previous->setNext(new_node);
} 


/*******************************************************************
 * @name printList
 * @brief this prints the components of the linked list to the terminal
 * @param none
 * @retval the printed out list on the terminal of the linked list
*******************************************************************/
void List::printList(){
    Skater *linked_ptr = head;
    while(linked_ptr != nullptr){
        cout << linked_ptr->getCountry() << "\t" << linked_ptr->getScore() << endl;
        linked_ptr = linked_ptr->getNext();
    }
}


/*******************************************************************
 * @name ~List
 * @brief this deconstructs the List by freeing all the memory of the list
 * @param none
 * @retval none
*******************************************************************/
List::~List(){
//this will automatically run when the program is terminating
    Skater *current_ptr = head;
    Skater *previous_ptr = nullptr;
    while(current_ptr != nullptr){
        previous_ptr = current_ptr;
        current_ptr = current_ptr->getNext();
//free the node
        delete previous_ptr;
    }
}
