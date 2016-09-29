//==========================================================
//
//  Course:     CSC 1101
//  Lab Number: Lab 6.2
//  Author: John Toniolo
//  Date:  Sept 29, 2016
//  Description:  convert a student's percentage to a letter grade
// 
// ==========================================================
#include <iostream>  // For cin, cout, and system

using namespace std;  // So "std::cout" may be abbreviated to "cout", for example.

int main()
{
  int
    grade; //user defined
  char
    letterGrade; //the grade converted to a corresponding letter grade

  // Show application header
  cout << "Grade Calculator!" << endl;
  cout << "-----------------" << endl;

  //prompt user for their percentage based grade
  cout << "Enter your grade: ";
  cin >> grade;

  if ((grade > 100) || (grade < 0))   //makes sure user input is sanitized
    {
      cout << "invalid input!\nprogram terminating...";
    }
  else
    {
      switch (grade / 10)   // I learned this technique from the book
        {                   //divide by 10 to get a single digit int
	case 0:           
	case 1:             //you can basically ignore all but the 10s digit because
	case 2:             //the grade is assigned in intervals of 10
	case 3:
	case 4:
        case 5:
	  cout << "F";
          break;
        case 6:
          cout << "D";
          break;
        case 7:
          cout << "C";
          break;
        case 8:
          cout << "B";
          break;
        case 9:
        case 10:
          cout << "A";
          break;
	}
	
    }
  cout << endl; //and an endl before the bash$ for cleanliness

  return 0;
             
}

