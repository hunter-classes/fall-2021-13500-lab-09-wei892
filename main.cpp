#include <iostream>


#include "funcs.h"
#include "coord3d.h"

int main()
{
  Coord3D pointP = {10, 20, 30};
  double x = length(&pointP);
  //std::cout << x << std::endl;
  std::cout << "Coord3D pointP = {10, 20, 30}" << std::endl;
  std::cout << "The length is: " << x << std::endl;

  
  return 0;
}
