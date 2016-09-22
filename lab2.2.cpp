//==========================================================
//
//  Title:    average computer for 3 floats 
//  Course:     CSC 1101
//  Lab Number: Lab 2 question 2
//  Author: John Toniolo
//  Date:     Sept 15, 2016
//  Description:   compute the average and truncate the input 
// 
// ==========================================================
#include <iostream>  // For cin, cout, and system

using namespace std;  // So "std::cout" may be abbreviated to "cout", for example.

int main()
{
  float num1, 
        num2, 
        num3, 
        aver;
  int tnum1, //these will store the truncated versions of the above numbers
      tnum2, 
      tnum3;

  // Show application header
  cout << "Welcome to my Application!" << endl;
  cout << "--------------------------" << endl << endl;
  
  //prompt user for three numbers and store them, they can be decimal numbers
  //if the user enters a whole number it will be stored as x.0
  cout << "Welcome, enter 3 numbers and I will compute the average\nEnter number 1/3: ";
  cin >> num1;
  cout << "Enter number 2/3: ";
  cin >> num2;
  cout << "Enter number 3/3: ";
  cin >> num3;

  //floats are stored, time to compute the average and print the output as directed
  cout << "You entered the following: " << num1 << ", "
       << num2 << ", " << num3 << endl << endl;

  //calculate average
  aver = (num1 + num2 + num3) / 3;

  //output average
  cout << "Your average is: " << aver << endl;

  //truncate and print as directed
  tnum1 = static_cast<int>(num1);
  tnum2 = static_cast<int>(num2);
  tnum3 = static_cast<int>(num3);
  cout << "trucated values " << tnum1 << ", " << tnum2 
       << ", " << tnum3 << endl;

  // Show application close
  cout << "End of my Application" << endl;
 
    return 0;
             
}

