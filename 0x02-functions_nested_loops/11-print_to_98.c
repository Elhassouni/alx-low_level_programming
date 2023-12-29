#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - Prints numbers from n to 98.
 *
 * @n: The starting number.
 *
 * Description: This function prints numbers from the given starting
 * number (@n) to 98, separated by commas. It handles different cases
 * based on the value of @n.
 *
 * Return: No return value.
 */

#define NUMBER 98

void print_to_98(int n)
{

	int pass = (n <=   NUMBER) ? 1 : -1;

	while (n != NUMBER)
	{
		printf("%d, ", n);
		n += pass;
	}

	printf("%d\n", NUMBER);
}
