//==========================================================
//
//  Course:     CSC 1101
//  Lab Number:  Lab 11 
//  Author: john toniolo
//  Date: Oct 25, 2016
//  Description:  take in string, if ALL letters are capital
//  return true with a function
// ==========================================================

#include <iostream>  // For cin, cout, and system
#include <stdio.h>   // Allows use of getchar()

using namespace std;  // So "std::cout" may be abbreviated to "cout", for example.

//prototype
bool allUpper(string);

int main(){

  string 
    userStr;

  // Show application header
  cout << "type in a word, no spaces, and press enter" << endl;
  cin >> userStr;
  
  if (allUpper(userStr) == true){
    cout << "all characters are upper case letters" << endl;
  }

  else if (allUpper(userStr) == false){
    cout << "there are lower case letters and/or"
	 << " numers and/or special characters" << endl;
  }
  
  

  // Show application close
  cout << "type any key to exit..." << endl;
  cin.ignore(10000, '\n'); //clears the input stream buffer for getchar()
  getchar(); //holds application window open untill user hits enter
  return 0; 
             
}

bool allUpper(string in){
  
  int 
    y = in.length(),
    length = y,
    i = 1;
  
  while (y != 0){
    
    //check if its a letter
    if ( isalpha(in[length - i]) ){
      //checks for if its upper case
      if ( isupper(in[length - i])){
	--y;
	++i;
	}
      //if its lower case return false
      else
	return false;
    }
    //if its a number/special char return false
    else
      return false;
 
  }
  return true;
}

