#include "../headers/main_tests.h"

START_TEST(discriminant_lower_zero_1) {
  double a = 1.0;
  double b = 2.5;
  double c = 3.5;

  quadratic_roots roots = solve_equation(a, b, c);
  ck_assert_double_nan(roots.first_root);
  ck_assert_double_nan(roots.second_root);
}
END_TEST

START_TEST(discriminant_lower_zero_2) {
  double a = -1.0;
  double b = -2.5;
  double c = -3.5;

  quadratic_roots roots = solve_equation(a, b, c);
  ck_assert_double_nan(roots.first_root);
  ck_assert_double_nan(roots.second_root);
}
END_TEST

static void discriminant_lower_zero_tests(TCase *test_case) {
  tcase_add_test(test_case, discriminant_lower_zero_1);
  tcase_add_test(test_case, discriminant_lower_zero_2);
}

void set_discriminant_lower_zero_case(Suite *suite) {
  create_case(suite, "discriminant_lower_zero_cases",
              discriminant_lower_zero_tests);
}