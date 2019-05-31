#include <iostream>
int main ()// bug1: main must return int
{
 std::cout << "is there a bug here? " << std::endl;
 //bug 2, Cout != cout
 // bug 3, no double quote
 // bug 4, no std::endl
 return 0;
}
