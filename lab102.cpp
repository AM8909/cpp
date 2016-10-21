//==========================================================
//
//  Course:     CSC 1101
//  Lab Number:  lab 8.2
//  Author: john toniolo
//  Date:     oct 20, 2016
//  Description: take in a number, break it into individual
//  numbers, then add them all together
// ==========================================================
#include <iostream>  // For cin, cout, and system
#include <stdio.h>   // Allows use of getchar()

using namespace std;

int main()
{
  int
    origIn,    //stores original user input
    n = 10,    //serves as a divider 
    sum = 0;   //start with sum = 0 and add digits
  
  // get user input
  cout << "enter your integer!" << endl;
  cin >> origIn;
   
  while (origIn != 0){
    //divide user in by 10, this moves the first digit
    //into a decimal place, if you gather it as a remainder
    //you have the first digit because 31/10 = 3.1 or 3 remainder 1
    //then add that digit to the sum
    sum = sum + (origIn % n);
    //divide the original input by 10, this removes a digit
    //that remaining decimal is trucated off because origIn
    //is an "int"
    origIn = origIn / n;
  }

  cout << sum;

  // Show application close
  cout << endl << "type any key to exit..." << endl;
  cin.ignore(10000, '\n'); //clears the input stream buffer for getchar()
  getchar(); //holds application window open untill user hits enter
  return 0; 
             
}

