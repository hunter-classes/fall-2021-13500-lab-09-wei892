/*
Name: Wei Lin Li
Course: CSCI-135
Instructor: Tong Yi and Mike Zamansky
Assignment: Lab 9 = poem.cpp

this file is used to store the code for part d
a file that is used to attempt dynamic relocation

*/


#include <iostream>

std::string * createAPoemDynamically();

int main()
{
  while(true)
  {
    std::string *p;
    p = createAPoemDynamically();
    std::cout << *p << std::endl;
    delete p;
  }

  return 0;
}

std::string * createAPoemDynamically()
{
  std::string *p = new std::string;
  *p = "Roses are red, violets are blue";
  return p;
  //delete p;
}
