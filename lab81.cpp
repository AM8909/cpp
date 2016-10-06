//==========================================================
//
//  Course:     CSC 1101
//  Lab Number:  Lab 8.1 
//  Author: John Toniolo
//  Date:   Oct 06, 2016
//  Description:  make a factorial calculator, so a! or if a = 3
//  then a! = 3 * 2 * 1
// ==========================================================
#include <iostream>  // For cin, cout, and system
#include <stdio.h>   // Allows use of getchar() *linux

using namespace std;  

int main()
{
  int
    //user defined integer
    a,
    //will serve as a counter and multiple of 
    //user supplied 'a'
    i;
     
  // Show application header
  cout << "Welcome to my Application!" << endl;
  cout << "--------------------------" << endl << endl;

  //collect user input for variable 'a'
  cout << "Enter a positive integer!\na =  ";
  cin >> a;
  //this is set to a, we are working by intervals of 1
  //so I can use this as a counter and the multiple
  i = a;   
 
  //i is set to a
  //so if a = 4 then i = 4
  while (i > 1)
    {
      //subtract 1 from a/i so i = 3
      i = (i - 1);
      //a = 4, i = 3, 
      //this is shorthand for a = a * i
      //or a = 4 * 3
      a *= i;
      //now a is holding the value, so you can multiple a 
      //by 2 and it will produce 4*3*2
    }
  
  //print the results, a! means factorial of 'a'
  cout << "a! = " << a << endl;
      

  // Show application close
  cout << "type any key to exit..." << endl;
  cin.ignore(10000, '\n'); //clears the input stream buffer for getchar()
  getchar(); //holds application window open untill user hits enter
  return 0; 
}

