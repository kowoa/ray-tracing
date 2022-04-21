#pragma once

#include <cmath>
#include <iostream>

class Vec3 {
 public:
  double &x = e[0];
  double &y = e[1];
  double &z = e[2];

  Vec3();
  Vec3(double x, double y, double z);

  double lengthSq() const;
  double length() const;

 private:
  double e[3];
};

Vec3 operator-(const Vec3 &v);
Vec3 operator+(const Vec3 &left, const Vec3 &right);
Vec3 &operator+=(Vec3 &left, const Vec3 &right);
Vec3 &operator-=(Vec3 &left, const Vec3 &right);
Vec3 &operator*=(Vec3 &v, const double scalar);
Vec3 &operator/=(Vec3 &v, const double scalar);
bool operator==(const Vec3 &left, const Vec3 &right);
std::ostream &operator<<(std::ostream &out, const Vec3 &v);
