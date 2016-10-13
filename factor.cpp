//==========================================================
//
//  Course:     CSC 1101
//  Author:    John Toniolo 
//  Date:  Oct 13, 2016
//  Description:  Takes in a number and prints all the factors
//    or defines it as prime
// ==========================================================
#include <iostream>  // For cin, cout, and system
#include <stdio.h>   // Allows use of getchar()
#include <cmath>     // For fmod() or % on doubles
using namespace std; 

int main()
{

  double
    userIn,       //user supplied value to be tested for primacy
    t,            //will store an odd numbered divisor
    n;            //will be used as a flag 
    
  // Show application header
  cout << "-------factor finder-------" << endl
       << "enter a positive integer" << endl
       << "enter 0 to exit" << endl << endl;
  
  //keep prompting user untill 0 is entered
  while(userIn != 0){ 
  
  //reset variables at beginning of while loop
  //or the loop will hang after first run
  t = 1;
  n = 1;
  cin >> userIn;
  //convert negative to postitive
  //to avoid program crash
  userIn = abs(userIn);
  
  //check for 1-7
  if (userIn == 1 ||
      userIn == 2 ||
      userIn == 3 ||
      userIn == 5 ||
      userIn == 7){
    cout << "prime" << endl;
    //n = 0 so it cannot be flagged as prime twice
    n = 0;
  }
  
  else{
    while (t < userIn){
      t = t + 1;
      //check each intiger up to userIn
      if (fmod(userIn, t) == 0 && t < userIn){      
	cout << fixed << "factor " 
	     << t << endl;
	//n = 0 so cannot be flagged as prime
	n = 0;
      }
      //if it runs out of factors to test
      //and userIn doesn't factor to an integer
      else if (t >= userIn && n != 0){
	cout << "prime" << endl;
      }
     } //end of while
    }//end of else
   }//end of user prompt while
  
  //closing promt when 0 is entered
  cout << "application terminating..." << endl;
  return 0;
}//end of main



