/*******************************************************************
 * @name main
 * @brief This function creates a linked list of scores in the olympic skating competition
 * @param takes in the country and score from the user
 * @retval returns the scores in decending order if asked
*******************************************************************/
#include "skater.h" 
#include "list.h"
#include <limits>
 
int main() 
{ 
  int flag = 0 ;
  char selection;
  string country;
  float score;

//make linked list
  List linked;

//create menu loop
  while(flag == 0){
    cout << endl;
    cout << "*** MENU ***" << endl;
    cout << "1. Enter a new team and score" << endl;
    cout << "2. Print rankings" << endl;
    cout << "0. Exit" << endl;
    cout << "Selection: ";
    cin >> selection;
    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    try{
      switch (selection)
          {
          case '1':
//add in a country and score
            cout << "Enter nation: ";
            getline(cin, country);
            cout << "Enter score: ";
            cin >> score; 
            linked.addNode(country, score);       
            break;

          case '2':
//print the list
            cout << endl;
            cout << "***RANKINGS***" << endl;
            linked.printList();
            cout << endl;
            break;

          case '0':
//exit the program and start deconstuctor
            flag = 1;
            break;

          default:
//give an error on a invalid selection
            throw selection;
            break;
          }
    }
    catch(char selection){
                cout << "Sorry incorrect selction: " << selection << " not a valid request" << endl;
            };
  }

  return 0; 
} 