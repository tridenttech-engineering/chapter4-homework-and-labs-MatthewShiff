//Lab4-4.cpp - displays the volume of a cylinder
//Created/revised by <Matthew Shifflett> on <02172025>

#include <iostream>
using namespace std;

int main()
{
//variables  
  double height   = 0.0;
  double radius   = 0.0;
  double volume   = 0.0;
  double PI       = 3.14159;

  cout << "Enter cylinder height: ";
  cin >> height;
  cout << "Enter cylinder radius: ";
  cin >> radius;
  

  volume = PI * radius * radius * height;
  
  cout << "Volume = " << volume << endl;
  
  return 0;
} //end of main function






