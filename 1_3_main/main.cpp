#include <iostream>

int main ()
{
  //std::cout << "/*"; // prints
  //std::cout << "*/"; // prints
  //std::cout << /* "*/" */; // syntax error
  std::cout << /*  "*/" /* "/*"  */; // prints
}
  
