#include <iostream>
#include "funcs.h"

#include <cmath>

// add functions here

double length(Coord3D *p)
{
  double dist = sqrt(pow(p->x , 2) + pow(p->x, 2) + pow(p->z, 2));
  return dist;
}

Coord3D *fartherFromOrgin(Coord3D *p1, Coord3D *p2)
{
  double distP1 = length(p1);
  double distP2 = length(p2);

  if (distP1 > distP2)
    {
      return p1;
    }
  else if (distP2 > distP1)
    {
      return p2;
    }
  else //if theyre equal
    {
      return p1;
    }
}
