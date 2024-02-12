#include "main.h"

/**
 * main - This function adds positive numbers.
 *
 * @argc: The number of command-line arguments.
 * @argv: An array of strings containing the command-line arguments.
 *
 * Description:
 * This program takes command-line arguments, treating them as strings,
 * and attempts to calculate the sum of valid integers found in the arguments.
 *
 * Return: return 0 for success and 1 otherwise.
 */
int main(int argc, char *argv[])
{
	int j, i, sum;

	sum = 0;
	if (argc < 1)
	{
		printf("%d\n", 0);
	}
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if ((argv[i][j]	< '0') || (argv[i][j] > '9'))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
