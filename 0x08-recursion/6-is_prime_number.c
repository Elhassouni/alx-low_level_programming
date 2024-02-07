#include "main.h"

/**
 * is_prime_number - Checks if a given number is a prime number.
 * @n: The number to check for primality.
 *
 * Return: True if the number is prime, false otherwise.
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (false);
	}
	else
	{
		return (helper_function(n, 2));
	}
}

/**
 * helper_function - Helper function to check if a number is prime.
 * @num: The number to check for primality.
 * @prime: The current divisor being checked.
 *
 * Return: True if the number is prime, false otherwise.
 */

int helper_function(int num, int prime)
{
	if (prime * prime > num) /* or (prime >= num/2) or sqrt(num)*/
	{
		return (true);
	}
	if ((prime % num) == 0)
	{
		return (false);
	}
	else
	{
		return (helper_function(num, (prime + 1)));
}	}
