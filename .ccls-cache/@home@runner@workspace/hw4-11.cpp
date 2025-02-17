// Introductory11.cpp - displays ending balance
// Created/revised by <MatthewShifflett> on <02172025>

#include <iostream>
using namespace std;

int main() 
{
  //variables
  
  double startingBalance = 0.0;
  double deposits = 0.0;
  double withdrawals = 0.0;
  double endingBalance = 0.0;

  //user inputs
  
  cout << "Starting balance: ";
  cin >> startingBalance;
  cout << "Deposits: ";
  cin >> deposits;
  cout << "Withdrawals: ";
  cin >> withdrawals;

  //calculation
  
  endingBalance = startingBalance + deposits - withdrawals;
  cout << "Ending balance: $" << endingBalance << endl;
  return 0;
   

  
} // end of main function