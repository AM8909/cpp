//==========================================================
//
//  Course:     CSC 1101
//  Lab Number:  Lab 8.3 
//  Author: John Toniolo
//  Date:   Oct 06, 2016
//  Description: ask user for 5 digit zip code (not starting in 0) 
//   print "thanks" if valid, ask to enter again if not valid (not 5 digits)
// ==========================================================
#include <fstream>  // For file handling
#include <iostream>  // For cin, cout, and system
#include <stdio.h>   // Allows use of getchar() *linux
#include <string>  // For string data type

using namespace std;  

int main()
{
  bool 
    //I decided to use a T or F value to operate the while loo
    n;
  int
     //this is user provided
    zip;
  string
    //this will store a string version of zip
    zips;
 
  n =  1; //set n to true
  while (n)
    {
      //get user provided ZIP code
      cout << "enter 5 digit zip code: ";
      cin >> zip;
      //convert users's zip code to a string
      zips = to_string(zip);
      //check length of zips 
      if (zips.length() == 5)
	{
	  //if zip is 5 characters long print thank you
	  //and set n to false so the while loop stops
	  cout << "thank you!\n";
	  n = 0;
	}
      else
	{
	  //if zip length != 0 print "invalid
	  //and loop continues
	  cout << "invalid\n";
	}
    }
  
  return 0; 
}

