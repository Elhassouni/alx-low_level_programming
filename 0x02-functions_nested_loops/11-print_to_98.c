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

void print_to_98(int n)
{
	int i;

	i = 99;

	while (n < i || n > i)
	{
		if (n <= i)
		{
			printf("%d", n);
			n++;
		}
		else if (n > 98)
		{
			printf("%d", n);
			n--;
			}
		else if (n < 0)
		{
			printf("%d", n);
			n--;
		}
		if (n == 99)
			printf("\n");
		else
			printf(", ");
	}
	printf("\n");

}
