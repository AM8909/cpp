//==========================================================
//
//  Course:     CSC 1101
//  Lab Number:  lab 8.1 
//  Author: john toniolo
//  Date:     oct 20, 2016
//  Description: take in number, then print it backwards,
//    and drop trailing zeros.
// ==========================================================
#include <iostream>  // For cin, cout, and system
#include <stdio.h>   // Allows use of getchar()
#include <string>  // For string data type

using namespace std;

int main()
{
  string
    origIn;     //stores original user input
  int
    i = 1,          //will be subtracted from length
    length;     //stores length or users input
  bool
    n = 0;

  // get user input
  cout << "enter your integer!" << endl;
  cin >> origIn;
 
  //user input gathered, now test and store
  //the length in two places,
  length = origIn.length();
  
  //the pointer set to 1, to ingore last character which is newline
  //and to be sure it reads the very first character, 1 is added to 
  //the while logic
  while (i != length + 1){
    
    //checks for 0 to ignore if needed
    if (origIn[length - i] != '0'){
      cout << origIn[length - i];  
      i++;
      n = 1;
      }
    
    //handles case for non trailing zeros
    else if (origIn[length - i] == '0' 
	     && n == 1){     
      cout << origIn[length - i];
      i++;    
      }
    
    //handles trailing zeros
    else
      i++;
  }

  // Show application close
  cout << endl << "type any key to exit..." << endl;
  cin.ignore(10000, '\n'); //clears the input stream buffer for getchar()
  getchar(); //holds application window open untill user hits enter
  return 0; 
             
}

