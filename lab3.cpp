//==========================================================
//
//  Course:     CSC 1101
//  Lab Number: Lab 3
//  Author: John Toniolo
//  Date: Sept 20, 2016
//  Description: convert total seconds inputed, into hours:minutes:seconds
// 
// ==========================================================
#include <iostream>  // For cin, cout, and system

using namespace std;  // So "std::cout" may be abbreviated to "cout", for example.

int main()
{

  //I used "int" because the user is unlikely to add fractions of a second
  //as theyd have to calculated it themselves to enter it. 
  int isec,//user input in seconds
    hr, //hours that can be taken out of seconds
    hrr, //seconds left after hours are subtracted
    mn, //minutes left after hours are subtracted
    mnr; //seconds left after minutes are subtracted
   

  // Show application header
  cout << "Welcome to my Application!" << endl;
  cout << "--------------------------" << endl << endl
       << "enter elapsed time in whole seconds: " << endl;
  cin >> isec; //get user input in seconds, store it in 'isec'

  
  //convert seconds into hours:minutes:seconds
  hr = isec / 3600;   //this gets your hours out of the total seconds
  hrr = isec % 3600;  //this sees how many seconds are left after hours are subtracted
  mn = hrr / 60;   //this gets minutes out of the remainder after hours are subtracted
  mnr = hrr % 60;  //this checks the remaining seconds after minutes are subtracted

  
  //this prints the output of the calculation in a readable format
  //extra endlines have been added for readability
  cout << "\nyour time is\n" 
       << hr << ":" << mn << ":" << mnr << endl;
  

  // Show application close
  cout << "\nTask complete... Program terminating\n";
   return 0;
             
}

