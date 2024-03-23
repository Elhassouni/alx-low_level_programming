#include "3-calc.h"

/**
  * main - Program Entry
  *
  * Description: Program that takes 4 arguments where 2 are
  *              int variables plus an operator to perform
  *              a function between the two numbers
  *
  *              Usage: ./calc num1 operator num2
  *                         |     |       |     |_ argv[3]
  *                         |     |       |_ argv[2]
  *                         |     |_ argv[1]
  *                         |_ argv[0]
  *
  * @argc: number of element argument
  * @argv: argument vector
  *
  * Return: 0-on success
  */
int main(int argc, char *argv[])
{
	int num1, num2;
	int result;
	char *operator = argv[2];
	/* Check for wrong number of arguments */
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	/* Check for invalid operator */
	if (strcmp(operator, "+") != 0 && strcmp(operator, "-") != 0 &&
		strcmp(operator, "*") != 0 && strcmp(operator, "/") != 0 &&
		strcmp(operator, "%") != 0)
	{
		printf("Error\n");
		exit(99);
	}

	/* Check for division and modelo by zero */
	if ((*operator == '/' || *operator == '%') && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}
	result = get_op_func(operator)(num1, num2);
	printf("%d\n", result);
	return (0);
}

