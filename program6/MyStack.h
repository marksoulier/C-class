/*******************************************************************
*Summary:
    This class is used to constuct a Stack form of data storage
*******************************************************************/

#ifndef MYSTACK_H
#define MYSTACK_H
#define MAX 10

#include <iostream>
using namespace std;

template <class T>
class MyStack { 
    private: 
        T array[MAX];
        int top;

    public: 
        MyStack ();
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
 * @brief starts the stack
 * @param none
 * @retval the top of the stack to 0
*******************************************************************/
template <class T>
MyStack<T>::MyStack() {
    top = 0;
}


/*******************************************************************
 * @name peek
 * @brief looks at the top of the stack
 * @param none
 * @retval the element on the top of the stack
*******************************************************************/
template <class T>
T MyStack<T>::peek() {
    int error;
    T blank;
    try{
        if((top-1) < 0){
            throw error;
        }
        else{
//look at the top element
            return array[top-1];
        }
    }
    catch(int error){
        cout << "Exception: Tried to peek at an empty stack!" << endl;
    }
    return blank;
}

/*******************************************************************
 * @name pop
 * @brief pops off the top element in the stack
 * @param none
 * @retval the element on the top of the stack
*******************************************************************/
template <class T>
T MyStack<T>::pop() {
    T blank;
    if(empty()){
//nothing
        return blank;
    }else{
//take out top element
        top -= 1;
        return array[top];
    }
}


/*******************************************************************
 * @name push 
 * @brief pushes a element on the top of the stack
 * @param none
 * @retval none
*******************************************************************/
template <class T>
void MyStack<T>::push(T new_element) {
    if(full()){
//nothing is full
    }else{
//place new element
        array[top] = new_element;
        top += 1;
    }
}

/*******************************************************************
 * @name clear
 * @brief clears the stack
 * @param none
 * @retval sets top of stack back to 0
*******************************************************************/
template <class T>
void MyStack<T>::clear() {
    top = 0;
}


/*******************************************************************
 * @name size
 * @brief returns the size of the stack
 * @param none
 * @retval the size of stack
*******************************************************************/
template <class T>
int MyStack<T>::size() {
    return top;
}

/*******************************************************************
 * @name full
 * @brief if the stack is full it will return 1 else will return 0
 * @param none
 * @retval 1 or 0 if the stack is full
*******************************************************************/
template <class T>
int MyStack<T>::full() {
    int bool_val = 0;
    int error = 1;
    try {
        if (top == MAX){
// throw error if the size of the stack is same as the array
            bool_val = 1;
            throw error;
        }
    }
    catch(int error){
        cout << "Exception: Tried to push to a full stack!" << endl;
    }
    return bool_val;
}


/*******************************************************************
 * @name empty
 * @brief returns of the stack is empty
 * @param none
 * @retval 1 or 0 depending if stack is empty
*******************************************************************/
template <class T>
int MyStack<T>::empty() {
    int bool_val = 0;
    int error = 1;
    try {
    if (top == 0){
// throw error if the size of the stack is 0
        bool_val = 1;
        throw error;
    }
    }
    catch(int error){
        cout << "Exception: Tried to pop from an empty stack!" << endl;
    }
    return bool_val;
}
