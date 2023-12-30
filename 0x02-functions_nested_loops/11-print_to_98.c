#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - Prints numbers from n to 98.
 *
 * @n: user varaible.
 * Description: This function prints numbers from the giventarting
 * number (n) to 98,eparated by commas. It handles different cases
 * based on the value of .
 *
 * Return: No return value.
 */

void print_to_98(int n)
{

	int i;

	i = 98;

	if (n <= 0)
	{
		while (n <= i)
		{
			printf("%d", n);

			if (n < i)
			{
				printf(", ");
			}
			n++;
	}
	else
	{
		while (n >= i)
		{
			printf("%d", n);

			if (n > i)
			{
				printf(", ");
			}
			i--;
		}
	}
	}
}
