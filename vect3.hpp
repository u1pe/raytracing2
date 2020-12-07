#ifndef VECT3_HPP
#define VECT3_HPP
#include <cmath>
#include <iostream>
#include <vector>
class vect3 {
 public:
  double x, y, z;
  vect3() {
    x = 0;
    y = 0;
    z = 0;
  };

  vect3(double x1, double y1, double z1) {
    x = x1;
    y = y1;
    z = z1;
  };
};
vect3 operator+(const vect3& a, const vect3& b) {
  return vect3(a.x + b.x, a.y + b.y, a.z + b.z);
}
vect3 operator-(const vect3& a, const vect3& b) {
  return vect3(a.x - b.x, a.y - b.y, a.z - b.z);
}

#endif