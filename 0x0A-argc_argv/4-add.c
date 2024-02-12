#include "main.h"


/**
 * main - This function adds positive numbers. and calculates
 * the sum of valid integers provided as command-line arguments,
 * while checking for non-digit characters in each argument's first character.
 *
 * @argc: The number of command-line arguments.
 * @argv: An array of strings containing the command-line arguments.
 *
 * Description:
 *   This program takes command-line arguments, treating them as intgers,
 *   and attempts to calculate the sum of valid integers found in the arguments.
 *   It checks each argument for non-digit characters in the first position,
 *   reporting an error if such characters are present. If no errors are found,
 *   the program prints the sum of valid integers to the standard output.
 *
 * Return: return 0 for success and 1 otherwise.
 */
int main(int argc, char *argv[])
{
	int i, result;
	
	i = 0;
	if (argc < 1)
	{
		printf("%d", 0);	
	}
	while (i < argc)
	{
		if (isalpha(argv[i][0]))
		{
			printf("Error");
			return (1);
		}
		else
		{
		result += atoi(argv[i]);
		}
		i++;
	}
	printf("%d\n", result);
	return (0);
}
