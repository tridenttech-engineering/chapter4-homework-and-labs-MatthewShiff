//Lab4-3.cpp - displays a salesperson's commission
//Created/revised by <Matthew Shifflett> on <02172025>

#include <iostream>
using namespace std;

int main()
{
  //declare named constant and variables
  double COMM_RATE = 0.0;
  double sales = 0.0;
  double commission = 0.0;

  //enter input item
  
  cout << "Sales amount: ";
  cin >> sales;

  cout << "Commission rate(decimal): ";
  cin >> COMM_RATE;

  //calculate and display the commision
  commission = sales * COMM_RATE;
  cout << "Commission: $" << commission << endl;

  return 0;

} //end of main function
