// Intermediate14.cpp - displays total sold and percentages of small, medium,
// large, and family sold Created/revised by <Matthew Shifflett> on <02172025>

#include <iostream>
using namespace std;

int main() 
{
  //variables

  double small = 0;
  double medium = 0;
  double large = 0;
  double family = 0;
  double total = 0;

  double percentsmall = 0.0;
  double percentmedium = 0.0;
  double percentlarge = 0.0;
  double percentfamily = 0.0;
  
  //user inputs
  cout << "Small pizzas sold: ";
  cin >> small;
  cout << "Medium pizzas sold: ";
  cin >> medium;
  cout << "Large pizzas sold: ";
  cin >> large;
  cout << "Family pizzas sold: ";
  cin >> family;
  //calculations
  
  total = small + medium + large + family;
  percentsmall = (small / total) * 100;
  percentmedium = (medium / total) * 100;
  percentlarge = (large / total) * 100;
  percentfamily = (family / total) * 100;
  
  cout << "Total pizzas sold: " << total << endl;
  cout << "Percent small pizzas sold: " << percentsmall << endl;
  cout << "Percent medium pizzas sold: " << percentmedium << endl;
  cout << "Percent large pizzas sold: " << percentlarge << endl;
  cout << "Percent family pizzas sold: " << percentfamily << endl;

  return 0;
} // end of main function