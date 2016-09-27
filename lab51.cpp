//==========================================================
//
//  Course:     CSC 1101
//  Lab Number: Lab 5.1
//  Author: John Toniolo
//  Date:  Sept 27
//  Description:  
//     Calculates employee salary including bonuses, commision and base pay
// ==========================================================
#include <iomanip>  // For formatted output
#include <iostream>  // For cin, cout, and system

using namespace std;  // So "std::cout" may be abbreviated to "cout", for example.

int main()
{
  
  float
    sales,
    salesCom,
    basePay,
    totalPay,
    bonus,
    yearsServ;
   
  // Show application header
  cout << "Employee Salary Calculator" << endl;
  cout << "--------------------------" << endl << endl;

  cout << "enter employee information"; //I used indents and stuff 
  cout << "\n\tbase pay: ";             //to format the code in 
  cin >> basePay;                       //a neat way thats readable
  cout << "\tyears of service: ";
  cin >> yearsServ;
  cout << "\tsales total this month: ";
  cin >> sales;

  //calculate monthly bonus for years of service and store it in bonus
  if (yearsServ <= 5)
    {
      bonus = 10 * yearsServ;
    }
  else if (yearsServ > 5)
    {
      bonus = 20 * yearsServ;
    }
  
  //now lets calculate the sales commision
  if (sales >= 5000 && sales < 10000)
    {
      salesCom = sales * .03;
    }
  else if (sales >= 10000)
    {
      salesCom = sales * .06;
    }

  //now add the commision and monthly bonus to base pay and output results
  totalPay = basePay + salesCom + bonus;
  
  //lets output it in a nice format
  cout << setfill('-') << endl
       << "---------------------------" << endl
       << "Employee Salary Information" << endl
       << "---------------------------" << endl
       << setw(9) << left << "base pay" << setw(9) << right << basePay << endl
       << setw(9) << left << "commision" << setw(9) << right << salesCom << endl
       << setw(9) << left << "bonus" << setw(9) << right << bonus << endl
       << setw(9) << left << "total pay" << setw(9) << right << totalPay << endl
       << endl << endl;

  return 0;
             
}

