/*
Name: Wei Lin Li
Course: CSCI-135
Instructor: Tong Yi and Mike Zamansky
Assignment: Lab 9 - tests.cpp

this file contains all the tests for each set of functions other than described in part d

*/

#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "funcs.h"

// add your tests here
double threeDec(double l)
{
  double p = pow(10, 3);
  return ((int)(l*p)) / p;
}


//==========Part A
TEST_CASE("testing function: length(Coord3D p)")
{
  Coord3D p = {10, 20, 30};
  CHECK(threeDec(length(&p)) == 37.416);
  p = {2, 3, 4};
  CHECK(threeDec(length(&p)) == 5.385);
  p = {6, 10, 20};
  CHECK(threeDec(length(&p)) == 23.151);
  p = {0, 0, 0};
  CHECK(threeDec(length(&p)) == 0.000);
}

//==========Part B
TEST_CASE("testing function: fartherFromOrigin(&pointX, &pointQ)")
{
  Coord3D p = {10, 20, 30};
  Coord3D q = {-10, 21, -22};
  CHECK(fartherFromOrigin(&p, &q) == &p);
  p = {10, 20, 30};
  q = {0, 0, 0};
  CHECK(fartherFromOrigin(&p, &q) == &p);
  p = {30, 50, 30};
  q = {100, 30, 50};
  CHECK(fartherFromOrigin(&p, &q) == &q);
  p = {2, 2, 2};
  q = {2, 2, 2};
  CHECK(fartherFromOrigin(&p, &q) == &p);
}

//==========Part C
TEST_CASE("testing function: move(&pos, &vel, num)")
{
  Coord3D pos = {0, 0, 100.0};
  Coord3D vel = {1, -5, 0.2};
  move(&pos, &vel, 2.0);
  CHECK(pos.x == 2);
  CHECK(pos.y == -10);
  CHECK(pos.z == 100.4);

  pos = {10, 200, 5};
  vel = {-2, 0.5, 8};
  move(&pos, &vel, 10.0);
  CHECK(pos.x == -10);
  CHECK(pos.y == 205);
  CHECK(pos.z == 85);
}

//==========Part E
TEST_CASE("testing function: createCoord3D(x, y, x)")
{
  Coord3D *p = createCoord3D(3.0, 4.0, 5.0);
  CHECK(p->x == 3.0);
  CHECK(p->y == 4.0);
  CHECK(p->z == 5.0);

  deleteCoord3D(p);

  p = createCoord3D(0, 0, 0);
  CHECK(p->x == 0);
  CHECK(p->y == 0);
  CHECK(p->z == 0);

  deleteCoord3D(p);
  p = createCoord3D(6, -8, 50);
  CHECK(p->x == 6);
  CHECK(p->y == -8);
  CHECK(p->z == 50);
}
