//==========================================================
//
//  Course:     CSC 1101
//  Lab Number: n/a
//  Author: John Toniolo
//  Date:  Oct 10, 2016
//  Description:   Write a sentinel loop that prompts the 
//   user for a character between ‘d’ and ‘s’, inclusive.  
//   Whether the character is inside or outside that range,
//   print a message.  Continue to prompt the user for a 
//   character until they enter ‘!’ (the sentinel value).
// 
// ==========================================================
#include <iostream>  // For cin, cout, and system
#include <stdio.h>   // Allows use of getchar()

using namespace std;  // So "std::cout" may be abbreviated to "cout", for example.

int main()
{
  char in; //this simple program only requires one variable
           //which is a user defined character
  const char SENT = '!'; //define the sentinel here so its easily
                       //changebale in a global scheme and is a constant


  while (in != SENT){
    cout << "enter number betwen 'd' and 's'"
	 << "(inclusive)\nenter '!' to exit\n>>>";
    cin >> in;

    if (isupper(in))   //tests if input is upper case
      cout << in << " is invalid! enter lower case letters\n";
    
    else if ( in == SENT)            //although the sentinel properlly
      cout << "exiting program\n";   //exits the program, it does not
                                     //give a response to the user so 
                                     //I added this
    else if ( in >= 'd' && in <= 's') //tests if input is valid
      cout << in << " is a valid entry!\n";
    
    else if ( in < 'd' || in > 's')  //tests if input is invalid but lower
      cout << in << " is invalid!\n";
        
  }
  // Show application close
  return 0; 
             
}

