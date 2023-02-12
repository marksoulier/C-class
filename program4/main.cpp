/*******************************************************************
 * @name main
 * @brief This function creates a linked list of scores in the olympic skating competition
 * @param takes in the country and score from the user
 * @retval returns the scores in decending order if asked
*******************************************************************/
#include "skater.h" 
#include "list.h"

 
int main() 
{ 
  int flag = 0 ;
  int selection;
  string country;
  float score;

  List linked;
  while(flag == 0){
    cout << endl;
    cout << "*** MENU ***" << endl;
    cout << "1. Enter a new team and score" << endl;
    cout << "2. Print rankings" << endl;
    cout << "3. Exit" << endl;
    cout << "Selection: ";
    cin >> selection;
    try{
      switch (selection)
          {
          case 1:
            cout << "Enter nation: ";
            cin >> country;
            cout << "Enter score: ";
            cin >> score; 
            linked.addNode(country, score);       
            break;

          case 2:
            cout << endl;
            cout << "***RANKINGS***" << endl;
            linked.printList();
            cout << endl;
            break;

          case 0:
            flag = 1;
            break;

          default:
            throw selection;
            break;
          }
    }
    catch(int selection){
                cout << "Sorry incorrect selction: " << selection << " not a valid request" << endl;
            };
  }

  return 0; 
} 