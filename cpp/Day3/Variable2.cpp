#include <iostream>

using namespace std;

void MultiplyNumbers()
{
 cout << "Enter the first number: ";
 
 int firstNumber = 0, secondNumber = 0, result = 0;

 cin >> firstNumber;

 cout << "Enter the second number: ";

 cin >> secondNumber;

 result = firstNumber * secondNumber;

 cout << firstNumber << " * " << secondNumber;
 cout << " = " << result << endl;
 
}

int main()
{
 cout << "This program will help you multiply two numbers " << endl;
 MultiplyNumbers();
 return 0;

}
