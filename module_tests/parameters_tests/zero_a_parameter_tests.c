#include "../headers/main_tests.h"

START_TEST(zero_a_parameter) {
  double a = 0;
  double b = -2.5;
  double c = 0.5;

  quadratic_roots roots = solve_equation(a, b, c);
  ck_assert_double_nan(roots.first_root);
  ck_assert_double_nan(roots.second_root);
}
END_TEST

static void zero_a_parameter_tests(TCase *test_case) {
  tcase_add_test(test_case, zero_a_parameter);
}

void set_zero_a_parameter_tests_case(Suite *suite) {
  create_case(suite, "zero_a_parameter_cases", zero_a_parameter_tests);
}