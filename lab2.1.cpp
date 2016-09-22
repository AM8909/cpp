//==========================================================
//
//  Title: 
//  Course:     CSC 1101
//  Lab Number: Lab2 question 1
//  Author: John Toniolo
//  Date:  Sept 15, 2016
//  Description: Calculate bags needed to store rice if the capacity of the bags is x
//  for one metric ton of rice
// ==========================================================
#include <iostream>  // For cin, cout, and system
using namespace std;  // So "std::cout" may be abbreviated to "cout", for example.

int main()
{
  
  int bagsNeeded, 
      remainder, 
      bagCapacity;
  const int metricTon = 2205;

  // Show application header
  cout << "Welcome to my Application!" << endl;
  cout << "--------------------------" << endl << endl;
  
  //gather the capacity of the bag
  cout << "input amount of rice that can fit in one bag\ninput a whole number: lbs";
  cin >> bagCapacity;

  //formulate how many bags are needed to hold a metric ton
  bagsNeeded = metricTon / bagCapacity;
  
  //you need one extra bag if there is left over rice
  //this checks for a decimal then adds a bag if there is one
  remainder = metricTon % bagCapacity;
  //cout << remainder;//this was for testing to make sure mod was working
  if (remainder > 0)
    bagsNeeded = ++bagsNeeded;//add one bag

  //print how many bags are needed to store one metric ton
  cout << "bags needed to store one metric ton: " << bagsNeeded << endl;

  // Show application close
  cout << "End of my Application" << endl;
 
  return 0;
             
}

