/*
*This is the first  sample of adding fuction to program
*/

#include <iostream>

using namespace std;// declare std here

//Declare function
int DemoConsoleOutput();

int main()
{
  //call the function
  DemoConsoleOutput();

  return 0;

}

//Define or implement the function
int DemoConsoleOutput()
{
 cout << "This is a simple string literal" << endl;
 cout << "Writing number five: " << 5 << endl;
 cout << "Ppppppperforming division 10/5 = " << 10/5 << endl;
 cout << "Pi when approximated is 22/7 = " << 22/7 << endl;
 cout << "Pi is 22/7 = " << 22.0/7 << endl;

 return 0;
}


