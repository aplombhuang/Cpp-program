#include <iostream>

using namespace std;

int frstNum = 0, scndNum = 0, result = 0;

void Multiplier()
{
 cout << "Enter the first number: ";
 
 cin >> frstNum;
 
 cout << "Enter the second number: ";
 
 cin >> scndNum;

 result = frstNum * scndNum;

 cout << "Here's ther result of the calculation: ";
 
 cout << frstNum  << "X" << scndNum ;

 cout << " = " << endl;
}

int main()
{
 cout << "This program will multiply two numbers" << endl;

 Multiplier();

 cout << frstNum << " X " << scndNum << " = " << result << endl;

 return 0;
}
