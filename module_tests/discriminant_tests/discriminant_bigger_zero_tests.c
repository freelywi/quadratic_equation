#include "../headers/main_tests.h"

START_TEST(discriminant_bigger_zero_1) {
  double a = -3.0;
  double b = -2.5;
  double c = 0.5;

  quadratic_roots roots = solve_equation(a, b, c);
  ck_assert_double_eq_tol(roots.first_root, 0.166667, EPS);
  ck_assert_double_eq_tol(roots.second_root, -1.0, EPS);
}
END_TEST

START_TEST(discriminant_bigger_zero_2) {
  double a = 2.0;
  double b = 0.0;
  double c = -1.0;
  quadratic_roots roots = solve_equation(a, b, c);
  ck_assert_double_eq_tol(roots.first_root, -0.707107, EPS);
  ck_assert_double_eq_tol(roots.second_root, 0.707107, EPS);
}
END_TEST

START_TEST(discriminant_bigger_zero_3) {
  double a = 1.0;
  double b = 5.5;
  double c = 0.0;
  quadratic_roots roots = solve_equation(a, b, c);
  ck_assert_double_eq_tol(roots.first_root, -5.5, EPS);
  ck_assert_double_eq_tol(roots.second_root, 0.0, EPS);
}
END_TEST

static void discriminant_bigger_zero_tests(TCase *test_case) {
  tcase_add_test(test_case, discriminant_bigger_zero_1);
  tcase_add_test(test_case, discriminant_bigger_zero_2);
  tcase_add_test(test_case, discriminant_bigger_zero_3);
}

void set_discriminant_bigger_zero_case(Suite *suite) {
  create_case(suite, "discriminant_bigger_zero_cases",
              discriminant_bigger_zero_tests);
}