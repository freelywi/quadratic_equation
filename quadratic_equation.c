#include "quadratic_equation.h"

quadratic_roots solve_equation(double a, double b, double c) {
  if (isnan(a) || isnan(b) || isnan(c) || isinf(a) || isinf(b) || isinf(c)) {
    return (quadratic_roots){NAN, NAN};
  }
  if (a == 0.) {
    return (quadratic_roots){NAN, NAN};
  }
  quadratic_roots result = {0};
  double discriminant = pow(b, 2) - 4 * a * c;
  if (discriminant == 0) {
    result.first_root = result.second_root = -b / 2 * a;
  } else if (discriminant > 0) {
    result.first_root = -(b + sqrt(discriminant)) / (2 * a);
    result.second_root = -(b - sqrt(discriminant)) / (2 * a);
  } else {
    result.first_root = NAN;
    result.second_root = NAN;
  }
  return result;
}