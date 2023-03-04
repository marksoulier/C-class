/*******************************************************************
*Summary:
    This class uses a Queue to be able to arrange data
*******************************************************************/

#ifndef MyQueue_H
#define MyQueue_H
#define MAX 10

#include <iostream>
using namespace std;

template <class T>
class MyQueue { 
    private: 
        T array[MAX];
        int head;
        int tail;
        int siz;

    public: 
        MyQueue ();
        T peek();
        T pop();
        void push(T new_element);
        void clear();
        int size();
        int full();
        int empty();
};

#endif


/*******************************************************************
 * @name constructer
 * @brief starts the queue
 * @param none
 * @retval the top of the queue to 0
*******************************************************************/
template <class T>
MyQueue<T>::MyQueue() {
    head = 0;
    tail = 1;
    siz = 0;
}


/*******************************************************************
 * @name peek
 * @brief looks at the top of the queue
 * @param none
 * @retval the element on the top of the queue
*******************************************************************/
template <class T>
T MyQueue<T>::peek() {
    int error;
    T blank;
    try{
        if(siz == 0){
            throw error;
        }
        else{
//return the element at head
            return array[tail];
        }
    }
    catch(int error){
        cout << "Exception: Tried to peek at an empty queue!" << endl;
    }
    return blank;
}

/*******************************************************************
 * @name pop
 * @brief pops off the top element in the queue
 * @param none
 * @retval the element on the top of the queue
*******************************************************************/
template <class T>
T MyQueue<T>::pop() {
    T blank;
    if(empty()){
//nothing
        return blank;
    }else{
//take element that first came in
        T item = array[tail];
        tail += 1;
        tail %= MAX;
        siz -= 1;
        return item;
    }
}


/*******************************************************************
 * @name push 
 * @brief pushes a element on the top of the queue
 * @param none
 * @retval none
*******************************************************************/
template <class T>
void MyQueue<T>::push(T new_element) {
    if(full()){
//nothing
    }else{
//place next element at head
        head += 1;
        head %= MAX;
        array[head] = new_element;
        siz += 1;
    }
}

/*******************************************************************
 * @name clear
 * @brief clears the queue
 * @param none
 * @retval sets top of queue back to 0
*******************************************************************/
template <class T>
void MyQueue<T>::clear() {
//restart array
    head = 0;
    tail = 1;
    siz = 0;
}


/*******************************************************************
 * @name size
 * @brief returns the size of the queue
 * @param none
 * @retval the size of queue
*******************************************************************/
template <class T>
int MyQueue<T>::size() {
    return siz;
}

/*******************************************************************
 * @name full
 * @brief if the queue is full it will return 1 else will return 0
 * @param none
 * @retval 1 or 0 if the queue is full
*******************************************************************/
template <class T>
int MyQueue<T>::full() {
    int bool_val = 0;
    int error = 1;
    try {
        if (siz == MAX){
// throw error if the size of the queue is same as the array
            bool_val = 1;
            throw error;
        }
    }
    catch(int error){
        cout << "Exception: Tried to push to a full queue!" << endl;
    }
    return bool_val;
}


/*******************************************************************
 * @name empty
 * @brief returns of the queue is empty
 * @param none
 * @retval 1 or 0 depending if queue is empty
*******************************************************************/
template <class T>
int MyQueue<T>::empty() {
    int bool_val = 0;
    int error = 1;
    try {
    if (siz == 0){
// throw error if the queue is empty
        bool_val = 1;
        throw error;
    }
    }
    catch(int error){
        cout << "Exception: Tried to pop from an empty queue!" << endl;
    }
    return bool_val;
}
