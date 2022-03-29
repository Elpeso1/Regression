#ifndef REGRESSION_HPP
#define REGRESSION_HPP
#include <cmath>
#include <iostream>
#include <vector>



class Result {
 public:
  double A{};
  double B{};
  
};

class Regression {
  struct Point {
    double x;
    double y;
  };
  std::vector<Point> points_{};
  /*int N_{};
  double sum_x_{};
  double sum_y_{};
  double sum_x2_{};
  double sum_xy_{};
  */

 public:
 int size() const;
  void add(double x, double y); 
  Result fit() const;
};
Result fit(Regression const &reg); 

#endif
