#include "main.h"
#include <stdio.h>

/**
 * add - Adds two numbers and returns the result.
 *
 * @firstnumber: The first number to be added.
 * @secondnumber: The second number to be added.
 *
 * Description: This function takes two parameters, performs the addition
 * operation, and returns the result.
 *
 * Return: The sum of @firstnumber and @secondnumber.
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
			if (n == 98)
			{
				printf("\n");
			}
			else
			{
				printf(", ");
			}
			n++;
		}
		else if (n > 98)
		{
			printf("%d", n);
		 	
			if (n == 98)
			{
				printf("\n");
 			}
			else
			{
				printf(", ");
			}
			n--;
			}
		else if (n < 0)
		{
			printf( "%d", n);
			if (n ==98)
			{
				printf("\n");
			}
			else
			{
				printf(", ");
			}
			n--;
		}
	}
	printf("\n");
}
