#include "./headers/main_tests.h"

Suite *get_discriminant_suite() {
  Suite *discriminant_suite = suite_create("Discriminant_suite");
  set_discriminant_bigger_zero_case(discriminant_suite);
  set_discriminant_is_zero_case(discriminant_suite);
  set_discriminant_lower_zero_case(discriminant_suite);
  return discriminant_suite;
}

Suite *get_parameters_suite() {
  Suite *parameters_suite = suite_create("Parameters_suite");
  set_parameters_nan_inf_case(parameters_suite);
  set_zero_a_parameter_tests_case(parameters_suite);
  return parameters_suite;
}

int main() {
  Suite *suites[] = {get_discriminant_suite(), get_parameters_suite(), NULL};

  for (int i = 0; suites[i] != NULL; i++, puts("")) {
    SRunner *runner = srunner_create(suites[i]);
    srunner_run_all(runner, CK_NORMAL);
    srunner_free(runner);
  }
}