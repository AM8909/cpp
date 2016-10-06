//==========================================================
//
//  Course:     CSC 1101
//  Lab Number:  Lab 8.2 
//  Author: John Toniolo
//  Date:   Oct 06, 2016
//  Description:  have a program take in a file,
//  read the numbers, and calculate the mean(average)
// ==========================================================
#include <fstream>  // For file handling
#include <iostream>  // For cin, cout, and system
#include <stdio.h>   // Allows use of getchar() *linux

using namespace std;  // So "std::cout" may be abbreviated to "cout", for example.

int main()
{
  ifstream
    //this will store the txt file input stream
    infile;
  int 
    //this will store the numbers from the file
    n1,
    //this will store the sum of all the numbers
    sum,
    //this will count how many numbers are in the txt file
    i;
 
  //open the txt file and set to instream variable 'infile'
  infile.open("/Users/johntoniolo/documents/code/cpp/testfile.txt");
  //set sum and i to zero so I can add/subtract and such
  sum = 0;
  i = 0;
  //read the first number here
  infile >> n1;
  
  //infile.eof will = false, so ! sets it to true
  //it will not = true untill end of file, which will
  //set it to false
  while (!infile.eof())
    {
      //sum = 0, now sum = 0 + value of n1 or first number in file
      sum = sum + n1;
      //in file reads next value in .txt file
      infile >> n1;
      //add 1 to the counter, so the first and second value are read, 
      i += 1;
    }
  //never forget to close a file
  infile.close();
  
  //output the results, this is pretty straight forward
  cout << "Your mean is! " << sum/i << endl;     
  
  return 0; 
}

