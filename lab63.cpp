//==========================================================
//
//  Course:     CSC 1101
//  Lab Number: 6.3
//  Author: John Toniolo
//  Date:  Sept, 29
//  Description:  Compare two user defined variables, use assert to ensure 
//                both variables are < 0
// ==========================================================
#define NDEBUG       //I deactivated the assert functions since assert() 
                     //is only used for debugging
#include <cassert>   //for the assert function
#include <iostream>  // For cin, cout, and system
#include <cmath>     //included so I could use the absolute value function

using namespace std;  // So "std::cout" may be abbreviated to "cout", for example.

int main()
{

  float
    var1, //user defined
    var2, //user defined
    var3; //this will store a comparison of var 1 and 2
  
  // Show application header
  cout << "Welcome to my Application!" << endl;
  cout << "--------------------------" << endl << endl;
 
  //prompt user and get variable 1 and 2
  cout << "Enter each variable then press enter!\nvariable 1: ";
  cin >> var1;
  cout << "variable 2: ";
  cin >> var2;
 
  //test var 1 and 2 with assert as directed, this isn't the intended use
  assert(var1 > 0);   // of assert but it is a learning point and so is included
  assert(var2 > 0);
  
  var3 = var1 - var2;   //this gets the difference between var1 and 2 
  
  if (var3 > 0)  
    cout << "variable 1 > variable 2\nby " << var3 << endl;
  else if (var3 < 0)
    {
    var3 = abs (var3);  //to show the difference between var 1 & 2 in a positive int
    cout << "variable 2 > variable 1\nby " << var3 << endl;
    }
  else if (var3 == 0)
    cout << "variable 1 and 2 are equal!" << endl;
    
  return 0;
             
}

