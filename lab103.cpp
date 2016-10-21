//==========================================================
//
//  Course:     CSC 1101
//  Lab Number:  lab 8.3
//  Author: john toniolo
//  Date:     oct 20, 2016
//  Description: take in SET of integers, add evens to evens
//  and odds to odds producing two sums. 
// ==========================================================
#include <iostream>  // For cin, cout, and system
#include <stdio.h>   // Allows use of getchar()
#include <vector>   //I used a vector to store the list of ints

using namespace std;

int main()
{
  int
    userIn = 1, //user supplied int (set to 1 so while loop is true)
    evenSum = 0,  //stores sum of even #s
    oddSum = 0,   //stores sum of odd #s
    i = 0,        //will read each item on a list
    index = 0;    //stores original user input

  cout << "type integer then press enter to submit" << endl
       << "enter 0 to finish and calculate" << endl;
  
  //declare a vector to store input in a list
  vector<int> intList;
  
  //sentinel controlled while loop to keep gathering
  //integers untill user types '0'
  while (userIn != 0){        //'0' terminates this while
    cin >> userIn;           
    intList.push_back(userIn); //increase size of vector by 1
                               //and store userIn there
    //check for even #s
    if (userIn % 2 == 0){
      evenSum = evenSum + userIn;
    }
    //handles odd #s
    else{
      oddSum = oddSum + userIn;
    }
    index++;
  }//userIn while
  
  //the vector stored all these #s
  //print them one by one
  cout << "your numbers are:\n";
  while (index > 1){               //set to 1 so it ignores
    cout << intList[i] << " ";     //your last digit ('0')
    i++;
    index--;
  }//index while

  //sums are calculated as numbers are input,
  //now just print them
  cout << endl
       << "even numbers sum: " << evenSum << endl
       << "odd numbers sum: " << oddSum << endl;
  
  // Show application close
  cout << endl << "type any key to exit..." << endl;
  cin.ignore(10000, '\n'); //clears the input stream buffer for getchar()
  getchar(); //holds application window open untill user hits enter
  return 0; 
             
}

