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
#include <cmath>     //for math functions
#include <iomanip>   //for formatting output in a neeter format

using namespace std;  // So "std::cout" may be abbreviated to "cout", for example.

int main()
{

  double
    userIn,       //user supplied value to be tested for primacy
    t,            //will store an odd numbered divisor
    y,            //will store an even numbered divisor
    userInModEv,  //will store quotit of 'userIn / 2'
    n;            //will be used as a flag
  
  
  // Show application header
  cout << "-------factor finder-------" << endl
       << "enter a positive integer" << endl
       << "enter 0 to exit" << endl << endl;
  
  //keep prompting user untill 0 is entered
  while(userIn != 0){   
  //be sure to reset variables at beginning of while loop
  //or the loop will just hang after first run
  n = 0;
  t = 1.0;
  y = 0.0;
  cin >> userIn;
  userInModEv = fmod(userIn, 2);
  //check for 1-7
  if (userIn == 1 ||
      userIn == 2 ||
      userIn == 3 ||
      userIn == 5 ||
      userIn == 7){
    cout << "prime" << endl;           
  }
  
  //test for even, exclude 0
  else if (userInModEv == 0 &&
	   userIn != 0){         
    while (y < userIn){
      y = y + 2;
      if (fmod(userIn, y) == 0){
	cout << "factor " << y << endl;
      }
    }
  }
   
  //test for odd, exclude 0
  else if (userInModEv != 0){         
    while (t < userIn){
      t = t + 2;    
      //divide by 3, 5, 7 ect...
      if (fmod(userIn, t) == 0){      
	cout << "factor " << t << endl;
	n = 1;
      }
      //if you run out of factors to test
      //and userIn doesn't factor to an integer
      else if (t >= userIn && n != 1){
	cout << "prime" << endl;
      }
    }//end of odd number while
  }//end of odd number iff
  }//end of user prompt while
  return 0;
}

