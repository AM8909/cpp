//==========================================================
//  Course:     CSC 1101
//  Lab Number: Lab 4
//  Author: John Toniolo
//  Date:  Sept 22, 2016
//  Description:  Three questions addressed, 
//         see comments for descriptions (lines 30, 58, and 73)
//==========================================================
#include <iomanip>  // For formatted output
#include <iostream>  // For cin, cout, and system
#include <cmath> //to use the square root functinoality in c++

using namespace std;  // So "std::cout" may be abbreviated to "cout", for example.

int main()
{
  float a,          //coefficient 1 (user defined)
    b,              //coefficient 2 (user defined)
    c,              //coefficient 3 (user defined)
    rootvar,        //stores part of the quadratic equation to clean up the code
    xa,             //stores root 1/2 
    xb;             //stores root 2/2
  char cr;          //will store one character from the users string
  string userIn,    //string for question 2 (user defined)
    userIn2;        //string for question 3 (user defined)
  
  // Show application header
  cout << "Welcome to my Application!" << endl;
  cout << "--------------------------" << endl << endl;
  
  //~~~~~~~~~~~~~~~~~~~~~~~~~~~~ QUESTION 1 ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
  //output the root/s of the given coefficients using the quadratic formula
  
  //first lets get the three coefficients via user input
  cout << "Enter coeffient a: ";
  cin >> a;
  cout << endl << "Enter coefficient b: ";
  cin >> b;
  cout << endl << "Enter coefficient c: ";
  cin >> c;
  
  //I stored the calculations under the root in a variable to make the equation look cleaner
  rootvar = (b*b) - (4*a*c);
  
  //these will calculate each root
  xa = (-b + sqrt(rootvar)) / (2*a);
  xb = (-b - sqrt(rootvar)) / (2*a);
  
  //print the output so it uses a 6 character width column
  cout << "root a: "   << setw(6) << xa 
       << "\nroot b: " << setw(6) << xb 
       << endl << endl;
  
  //the output will be placed into 6 character columns,
  //but if the number is greater than 6 char it will
  //take up more than 6 character widths to retain accuracy
  
  
  //~~~~~~~~~~~~~~~~~~~~~~~~~~~~ QUESTION 2 ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
  //use ignore/get/peek to output the 5th and 7th char of a line of text
  
  //get user's string
  cout << "enter a line of characters:";  //prompt user for string
  getline(cin, userIn);                   //cin whole line untill \n
  cin.ignore(4, '\n');                    //ignore first 4 characters loading char 5 into buffer
  cin.get(cr);                            //get char 5
  cout << endl << "your characters are:" << cr; //print char 5
  cin.ignore(1, '\n');                    //ignore the next char, buffer is at char 6
  cr = cin.peek();                        //peek looks at char 6 even though steam is at char 6
  cout << " and  " << cr;                      // print char 7
  
  
  //~~~~~~~~~~~~~~~~~~~~~~~~~~~~ QUESTION 3 ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
  
  // getting a whole string and printing it back twice per the instructions
  cin.ignore(1000, '\n');                           //clear the buffer stream
  cout << endl << endl << "enter a string: ";       //prompt for a string
  getline(cin, userIn2);                            //get whole string untill \n
  cout << endl << userIn2 << endl << userIn2;       //print the string twice
  
  // Show application close
  cout << "\n\nApplication terminating...\n";
  
  return 0;
}

