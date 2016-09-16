//==========================================================
//
//  Title:    
//  Course:     CSC 1101
//  Lab Number: 
//  Author: 
//  Date:     
//  Description:
// 
// ==========================================================
//#include <conio.h>   //For function getch() *not needed for linux based compilations
//#include <cstdlib>  // For several general-purpose functions
//#include <fstream>  // For file handling
//#include <iomanip>  // For formatted output
#include <iostream>  // For cin, cout, and system
//#include <stdio.h>   // Allows use of getchar()
//#include <unistd.h> //for some unix tools including sleep
//#include <string>  // For string data type

using namespace std;  // So "std::cout" may be abbreviated to "cout", for example.

int main()
{

  // Show application header
  cout << "Welcome to my Application!" << endl;
  cout << "--------------------------" << endl << endl;

  // Show application close
  cout << "type any key to exit" << endl;
  getchar();//holds application window open untill user hits enter
  return 0;
             
}

