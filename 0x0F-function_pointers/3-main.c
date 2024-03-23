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
	int result;
	int num1 = atoi(argv[1]);
	int num2 = atoi(argv[3]);
	char *operator = argv[2];

	if (argc != 4)
	{
	printf("Error");
	exit(98);
	}
	if (strcmp(argv[2], "+") != 0 && strcmp(argv[2], "-") != 0 &&
			strcmp(argv[2], "*") != 0 && strcmp(argv[2], "/") != 0
			&& strcmp(argv[2], "%") != 0 &&
			(get_op_func(operator) == NULL || operator[1] != '\0'))
	{
	printf("Error\n");
	exit(99);
	}
	if ((*operator == 47 || *operator == 37) && num2 == 0)
	{
	printf("error\n");
	exit(100);
	}
	result = get_op_func(operator)(num1, num2);
	printf("%d\n", result);

	return (0);
}
