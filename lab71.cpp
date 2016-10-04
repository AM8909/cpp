//==========================================================
//
//  Course:     CSC 1101
//  Lab Number: Lab 7
//  Author:  John Toniolo 
//  Date:  Oct 4, 2016
//  Description:  get in or out of state, then upper or lower division
//    from user... then output appropriate cost of a credit hour
// ==========================================================
#include <iostream>  // For cin, cout, and system
#include <stdio.h>   // Allows use of getchar() *linux

using namespace std;  // So "std::cout" may be abbreviated to "cout", for example.

int main()
{
  char
    residence,
    division;
  double
    creditHourRate;

  // Show application header
  cout << "IN state, or OUT of state?" << endl
       << "i or I for in, o or O for out " 
       << endl;
  
  //get residence from user
  cin >> residence;
  residence = tolower(residence); //turn residence to lower
                                  //whether user enters upper
                                  //or not
  
  
  cout << "UPPER or LOWER divison?" << endl
       << "u or U for upper, l or L for lower " 
       << endl;
  
  //get division from user
  cin >> division;          
  division = tolower(division); //turn divisions into lower
                                //whether user enters upper
                                //or not
  
  
  //first test for IN or OUT of state
  switch (residence)
    {
    case 'i':           
      switch (division)
	{
	case 'u':       //test in state for upper or lower
	  creditHourRate = 427.67;
	  break;
	case 'l':
	  creditHourRate = 360.39;
	  break;
	//lets user know if invalid entry was made
	default:
	  cout << "INVALID divison was entered!\n"; 
	  break;
	}
      break;
    case 'o':           //test out of state for upper or lower
      switch (division)
	{
	case 'u':
	  creditHourRate = 983.45;
	  break;
	case 'l':
	  creditHourRate = 825.42;
	  break;
	//lets user know if invalid entry was made
	default:
	  cout << "INVALID division was entered!\n";
	  break;
	}
      break;
    //lets user know if invalid entry was made
    default:
      cout << "INVALID residence was entered!\n";
    }
  
  //print the credit hour cost
  cout << creditHourRate << endl; 
  
  // Show application close
  cout << "type any key to exit..." << endl;
  cin.ignore(10000, '\n'); //clears the input stream buffer for getchar()
  getchar(); //holds application window open untill user hits enter
  return 0; 
}

