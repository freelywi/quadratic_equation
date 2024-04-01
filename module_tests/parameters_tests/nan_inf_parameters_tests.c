#include "../headers/main_tests.h"

START_TEST(parameters_nan_inf_tests_1) {
  double a = -3.0;
  double b = -2.5;
  double c = NAN;

  quadratic_roots roots = solve_equation(a, b, c);
  ck_assert_double_nan(roots.first_root);
  ck_assert_double_nan(roots.second_root);
}
END_TEST

START_TEST(parameters_nan_inf_tests_2) {
  double a = -2.0;
  double b = INFINITY;
  double c = NAN;

  quadratic_roots roots = solve_equation(a, b, c);
  ck_assert_double_nan(roots.first_root);
  ck_assert_double_nan(roots.second_root);
}
END_TEST

START_TEST(parameters_nan_inf_tests_3) {
  double a = 1.0;
  double b = INFINITY;
  double c = 0.0;

  quadratic_roots roots = solve_equation(a, b, c);
  ck_assert_double_nan(roots.first_root);
  ck_assert_double_nan(roots.second_root);
}
END_TEST

static void parameters_nan_inf_tests(TCase *test_case) {
  tcase_add_test(test_case, parameters_nan_inf_tests_1);
  tcase_add_test(test_case, parameters_nan_inf_tests_2);
  tcase_add_test(test_case, parameters_nan_inf_tests_3);
}

void set_parameters_nan_inf_case(Suite *suite) {
  create_case(suite, "parameters_nan_inf_cases", parameters_nan_inf_tests);
}