#ifndef MAIN_TESTS_H
#define MAIN_TESTS_H

#include <check.h>
#include <stdio.h>

#include "../../quadratic_equation.h"

// Проверяемая точность
#define EPS 1e-6

void set_discriminant_bigger_zero_case(Suite *suite);
void set_discriminant_is_zero_case(Suite *suite);
void set_discriminant_lower_zero_case(Suite *suite);

void set_parameters_nan_inf_case(Suite *suite);
void set_zero_a_parameter_tests_case(Suite *suite);

void create_case(Suite *suite, const char *tcase_name,
                 void (*add_cases)(TCase *));

#endif  // MAIN_TESTS_H