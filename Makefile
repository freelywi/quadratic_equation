CC = gcc
CFLAGS = -Wall -Wextra -Werror
TEST_LIBS=-lcheck
ifeq ($(shell uname), Linux)
	TEST_LIBS+= -lm -lpthread -lrt -lsubunit
endif
LIB_NAME=quadratic_equation.a
PRGRM_NAME=test_quadratic_equation
TEST_DIR=module_tests/
TEST_FILES=$(TEST_DIR)test_main_quadratic.c $(TEST_DIR)*/*_tests.c
IMPL_FILES=*.c
OBJ_FILES=*.o
LIB_NAME=quadratic_lib.a

all: clean compile

compile:
	$(CC) $(CFLAGS) -c quadratic_equation.c

check: clean $(LIB_NAME)
	$(CC) $(CFLAGS) $(TEST_FILES) $(TEST_LIBS) $(LIB_NAME) -o $(PRGRM_NAME)
	./$(PRGRM_NAME)

$(LIB_NAME): compile
	ar -rcs $(LIB_NAME) $(OBJ_FILES)
	rm -f $(OBJ_FILES)

clean:
	rm -f $(PRGRM_NAME) $(OBJ_FILES) $(LIB_NAME)
 
style:
	clang-format -style=Google -i *.c
	clang-format -style=Google -n *.c 