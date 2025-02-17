//Lab4-2.cpp - displays a salesperson's commission
//Created/revised by <Matthew Shifflett> on <02172025>
#include <iostream>
using namespace std;
int main()
{

    const double COMMISSION_RATE = 0.1;
    double sales = 0.0;
    double commission = 0.0;

   cout << "Enter the sales amount: ";
   cin >> sales;

   commission = sales * COMMISSION_RATE;
   cout << "Commission: $" << commission << endl;

  
  return 0;
} //end of main function
/*
Sales amount: 1328.50
Commission: $132.85
Press any key to continue . . .
*/