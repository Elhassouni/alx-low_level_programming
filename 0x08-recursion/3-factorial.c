#include "main.h"

/**
 * factorial - Calculates the factorial of a number using recursion.
 * @n: The number for which to calculate the factorial.
 *
 * This function recursively calculates the factorial of a number.
 *
 * Return: The factorial of the number if it's non-negative,
 *         or -1 if the number is negative.
 */

int factorial(int n)
{
	if (n <= 0)
	{
		return (-1);
	}
	if (n == 1)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
