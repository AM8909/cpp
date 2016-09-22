//==========================================================
//
//  Title:    
//  Course:     CSC 1101
//  Lab Number: Lab 2 question 3 
//  Author: John Toniolo
//  Date:     Sept 15, 2016
//  Description: get user input for radius of circle, then compute area
// 
// ==========================================================
#include <cmath>  // For formatted output
#include <iostream>  // For cin, cout, and system

using namespace std;  // So "std::cout" may be abbreviated to "cout", for example.

int main()
{

  float rad, 
        area;

  // Show application header
  cout << "Welcome to my Application!" << endl;
  cout << "--------------------------" << endl << endl;

  //get users circle radius
  cout << "Enter your cirlce's radius: ";
  cin >> rad;
  
  //compute the area
  area = 3.14 * pow(rad, 2);

  //output the answer
  cout << "The area of your cirlce is: " << area << endl;
  

  // Show application close
  cout << "End of my Application" << endl;
 
  //getchar(); //same as _getch() but for *nix, requires stdio.h header file
  //_getch();  this is not going to work for the reason noted on line 13 
  return 0;
             
}

