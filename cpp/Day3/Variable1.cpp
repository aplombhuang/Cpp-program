#include <iostream>

using namespace std;

int main()
{
 cout << "This program will help you multiply two numbers " << endl;

 cout << "enter the first number" ;

 int firstNumber = 0;

 cin >> firstNumber;

 cout << "enter the second number";
 
 int secondNumber = 0;

 cin >> secondNumber;

 int multiplicationResult = firstNumber * secondNumber;

 cout << firstNumber << " * " << secondNumber;
 cout << " = " << multiplicationResult << endl;

 return 0;
}
