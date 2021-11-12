#include <iostream>
#include "funcs.h"
#include "coord3d.h"

int main()
{
  //============================================ Part A

  std::cout << "Part A" << std::endl;
  Coord3D pointP = {10, 20, 30};
  double x = length(&pointP);
  //std::cout << x << std::endl;
  std::cout << "Coord3D pointP = {10, 20, 30}" << std::endl;
  std::cout << "The length is: " << x << std::endl;

  //============================================ Part B
  std::cout << "\nPartB" << std::endl;
  Coord3D pointX = {10, 20, 30};
  std::cout << "PointX = {10, 20, 30}" << std::endl;
  Coord3D pointQ = {-20, 21, -22};
  std::cout << "PointQ = {-20, 21, -22}" << std::endl;

  std::cout << "Address of X: " << &pointX << std::endl;
  std::cout << "Address of Q: " << &pointQ << std::endl;

  Coord3D * ans = fartherFromOrigin(&pointX, &pointQ);

  std::cout << "ans = " << ans << std::endl;

  //============================================ Part C
  std::cout << "\nPart C" << std::endl;
  Coord3D pos = {0, 0, 100.0};
  Coord3D vel = {1, -5, 0.2};
  std::cout << "Pos: {0, 0, 100.0}" << std::endl;
  std::cout << "Vel: {1, -5, 0.2}" << std::endl;

  move(&pos, &vel, 2.0); // object pos gets changed
  std::cout << "The new coordinate is: " << std::endl;
  std::cout << "{" <<pos.x << " " << pos.y << " " << pos.z << "}" << std::endl;
  
  //============================================ Part E
  std::cout << "\nPart C" << std::endl;
  std::cout << "Creatinging: new Coord3D..." << std::endl;
  Coord3D *ppos = createCoord3D(3.0, 4.0, 5.0);
  std::cout << "The values of the newly created array is: {" << ppos->x << ", " << ppos->y << ", " << ppos->z << "}" << std::endl;
  deleteCoord3D(ppos);

  return 0;
}


