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
vect3 operator*(const vect3& a, const double b) {
  return vect3(b * a.x, b * a.y, b * a.z);
}
vect3 operator*(const double b, const vect3& a) {
  return vect3(b * a.x, b * a.y, b * a.z);
}
double dot(const vect3& a, const vect3& b) {
  return (a.x * b.x) + (a.y * b.y) + (a.z * b.z);
}
double vect3norm1(const vect3& a) {
  return std::abs(a.x) + std::abs(a.y) + std::abs(a.z);
}
double vect3norm2(const vect3& a) {
  return (a.x * a.x) + (a.y * a.y) + (a.z * a.z);
}
double vect3norminfty(const vect3& a, const vect3& b) {
  return std::max(std::abs(a.x), std::abs(a.y), std::abs(a.z));
}
double length(const vect3& a) { return std::sqrt(vect3norm2(a)); }

#endif