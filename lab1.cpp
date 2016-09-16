//==========================================================
//
//  Title:  EMPLOYEE SALARY CALCULATOR 9000 EXTREME!
//  Course:     CSC 1101
//  Lab Number: one (1)
//  Author: John Michael Toniolo
//  Date: Sept, 13 2016
//  Description: get input on employees from user then print salary and information
// 
// ==========================================================
#include <iostream>  // For cin, cout, and system
#include <string>  // For string data type
using namespace std;  // So "std::cout" may be abbreviated to "cout", for example.

float numHours, salPerHour, totalSal;
string nameF, nameL;

int main()//this is called a method and is the equiv of a function in python probably
{

  // Show application header
  cout << "Welcome to my Application!" << endl;
  cout << "--------------------------" << endl << endl;

  //gather employee information one data input at a time
  cout << "enter employee hours worked: ";//prints a string asking user for input
  cin >> numHours;//assigns variable an int per user input
  cout << "enter employee salary per hour: ";
  cin >> salPerHour;
  cout << "enter employee name: ";
  cin >> nameF >> nameL;//all data is gathered
  cout << endl;

  //time to calculate
  totalSal = numHours * salPerHour;

  //print the data to the user in a neat format
  cout << "Employee Information" << endl
       << "name: " << nameF << " " << nameL << endl
       << "total salary: " << "$" << totalSal << endl << endl;

  // Show application close
  cout << "End of my Application" << endl;
 
  //return 0; //this particular program and compiler does not require this line of code to
              //compile properlly so its commented out.
}

