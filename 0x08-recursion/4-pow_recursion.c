#include "main.h"

/**
 * _pow_recursion - Calculates the power of a number using recursion.
 * @x: The base.
 * @y: The exponent.
 *
 * This function recursively calculates the power of a number (x^y).
 *
 * Return: The result of x raised to the power of y,
 *         or -1 if the exponent is negative and 1 if the exponent is 0.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x *  _pow_recursion(x, y - 1));
	}
}
