//==========================================================
//
//  Course:     CSC 1101
//  Lab Number: Lab 06 
//  Author: John Toniolo
//  Date:  Sept 29, 2016
//  Description: take in the square feet and cost of 3 houses,
//     compute which one is the most cost efficient (least price / sq foot) 
//     and output
// ==========================================================
#include <iostream>  // For cin, cout, and system

using namespace std;  // So "std::cout" may be abbreviated to "cout", for example.

int main()
{

  float
    basePrice1,
    basePrice2,
    basePrice3,
    finishArea1,
    finishArea2,
    finishArea3,
    house1,
    house2,
    house3;

  // Show application header
  cout << "Cost Per Square Foot Calculator" << endl;
  cout << "-------------------------------" << endl << endl;

  //prompt and store the basic data of house one
  cout << "Enter information for house 1/3\n"
       << "base price: $";
  cin >> basePrice1;
  cout << "finished area in square feet: ";
  cin >> finishArea1;

  //prompt and store the basic data of house two
  cout << "Enter information for house 2/3\n"
       << "base price: $";
  cin >> basePrice2;
  cout << "finished area in square feet: ";
  cin >> finishArea2;

  //prompt and store the basic data of house three
  cout << "Enter information for house 3/3\n"
       << "base price: $";
  cin >> basePrice3;
  cout << "finished area in square feet: ";
  cin >> finishArea3;

  //calculate the pricer/sq ft of each house and store them in a variable
  house1 = basePrice1 / finishArea1;
  house2 = basePrice2 / finishArea2;
  house3 = basePrice3 / finishArea3;
  
  if (house1 < house2)   //we test house 1 vs. house 2 first
    {                    //the lesser of the two is compared to house 3
      if (house1 < house3)     //not forgetting to check for equality. 
	cout << "house 1 has the least price per square foot! $" 
	     << house1 << "/sqr feet\n";
      else if (house3 < house1)
	cout << "house 3 has the least price per square foot! $" 
	     << house3 << "/sqr feet\n";
      else if (house1 == house3)
	cout << "house 1 and house 3 are equal in price per square foot! $" 
	     << house1 << "sqr feet\n";
    }
  
  else if (house1 == house2)
    {
      if (house1 < house3)
	cout << "house 1 and house 2 are equal in price per square foot! $" 
	     << house1 << "/sqr feet\n";
      else if (house3 < house1)
	cout << "house 3 has the least price per square foot! $"
	     << house3 << "/sqr feet\n";
      else if (house1 == house3)
	cout << "All three houses are equal in price! $"
	     << house1 << "/sqr feet\n";
    }
  
  else if (house2 < house1)
    {
      if (house2 < house3)
	cout << "house 2 has the least price per square foot! $"
	     << house2 << "/sqr feet\n";
      else if (house3 < house2)
	cout << "house 3 has the least price per square foot! $"
	     << house3 << "/sqr feet\n";
      else if (house3 == house2)
	cout << "house 2 and house 3 are the same price per square foot! $"
	     << house2 << "/sqr feet\n";
    }
  
  
 
  return 0;
             
}

