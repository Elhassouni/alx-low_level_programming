#include "main.h"

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: The number for which to find the square root.
 *
 * This function calculates the natural square root of a given number using
 * a helper function for recursive processing. If the number is negative,
 * the function returns -1. Otherwise, it initiates the recursive process
 * by calling the helper_function with the given number and an initial root
 * value of 0.
 *
 * Return: The natural square root of the number if it exists, otherwise -1.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);  /* Return -1 for negative numbers */
	}
	else
	{
		return (helper_function(n, 0));/* Initiate recursive process*/
	}
}

/**
 * helper_function - Recursive function to help find the square root.
 * @num: The number for which to find the square root.
 * @root: The current root value being considered.
 *
 * This function is called by _sqrt_recursion and recursively calculates
 * the square root of the given number. It uses a recursive approach,
 * incrementing the root value until a match or exceedance is found.
 *
 * Return: The natural square root of the number if it exists, otherwise -1.
 */

int helper_function(int num, int root)
{
	if ((root * root) > num)
	{
		return (-1); /* If root exceeds num, no square root exists*/
	}
	if ((root * root) == num)
	{
		return (root);  /* If root matches num, return the root*/
	}
	else
	{
		return (helper_function(num, root + 1));
		/* Recursive call with incremented root*/
	}
}

