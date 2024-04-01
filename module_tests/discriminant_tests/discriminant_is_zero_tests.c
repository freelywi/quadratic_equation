#include "../headers/main_tests.h"

START_TEST(discriminant_is_zero_1) {
  double a = 1.0;
  double b = -10.0;
  double c = 25.0;

  quadratic_roots roots = solve_equation(a, b, c);
  ck_assert_double_eq(roots.first_root, 5.);
  ck_assert_double_eq(roots.second_root, 5.);
}
END_TEST

START_TEST(discriminant_is_zero_2) {
  double a = 1.0;
  double b = 0.0;
  double c = 0.0;

  quadratic_roots roots = solve_equation(a, b, c);
  ck_assert_double_eq(roots.first_root, 0.);
  ck_assert_double_eq(roots.second_root, 0.);
}
END_TEST

START_TEST(discriminant_is_zero_3) {
  double a = 1.0;
  double b = -2.0;
  double c = 1.0;
  quadratic_roots roots = solve_equation(a, b, c);
  ck_assert_double_eq(roots.first_root, 1.);
  ck_assert_double_eq(roots.second_root, 1.);
}
END_TEST

static void discriminant_is_zero_tests(TCase *test_case) {
  tcase_add_test(test_case, discriminant_is_zero_1);
  tcase_add_test(test_case, discriminant_is_zero_2);
  tcase_add_test(test_case, discriminant_is_zero_3);
}

void set_discriminant_is_zero_case(Suite *suite) {
  create_case(suite, "discriminant_is_zero_cases", discriminant_is_zero_tests);
}