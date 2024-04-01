#ifndef QUADRATIC_EQUATION_H
#define QUADRATIC_EQUATION_H

#include <math.h>

// структура для хранения значений корней
typedef struct {
  double first_root;
  double second_root;
} quadratic_roots;

quadratic_roots solve_equation(double a, double b, double c);

#endif  // QUADRATIC_EQUATION_H