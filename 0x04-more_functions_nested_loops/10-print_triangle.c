#include "main.h"

/**
 * print_triangle - function that prints a triangle, followed by a new line.
 *
 * @size: Limit for the loop.
 *
 * Return: Always 0.
 */

void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i, j, k;

		i = 1;
		while (i <= size)
		{
			j = 1;
			while (j <= size - i)
			{
				_putchar(' ');
				j++;
			}
			k = 1;
			while (k <= i)
			{
				_putchar('#');
				k++;
			}
		_putchar('\n');
		i++;
		}
	}
}
