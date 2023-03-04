/*******************************************************************
 * @name main
 * @brief This function creates a linked list of scores in the olympic skating competition
 * @param takes in the country and score from the user
 * @retval returns the scores in decending order if asked
*******************************************************************/
#include <iostream> 
#include "MyStack.h" 
#include "MyQueue.h" 

using namespace std; 
 
int main() 
{ 
   MyStack <float> s1; 
   MyQueue <float> q1; 
   float i; 
  
   cout << "Filling stack and queue." << endl; 
  
   for (i=0; i<11; i++) 
   { 
      s1.push(i); 
      q1.push(i); 
      cout << "Top of stack = " << s1.peek() << "\t" << 
              "Stack size = " << s1.size() << endl; 
      cout << "Front of queue = " << q1.peek() << "\t" << 
              "Queue size = " << q1.size() << endl; 
   } 
  
   cout << "Emptying stack and queue." << endl; 
  
   for (i=0; i<11; i++) 
   { 
      s1.pop(); 
      q1.pop(); 
      cout << "Top of stack = " << s1.peek() << "\t" << 
              "Stack size = " << s1.size() << endl; 
      cout << "Front of queue = " << q1.peek() << "\t" << 
              "Queue size = " << q1.size() << endl; 
   } 
  
   return 0; 
}