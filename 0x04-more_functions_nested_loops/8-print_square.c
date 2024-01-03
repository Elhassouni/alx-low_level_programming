#include "main.h"

/**
 * print_square - function that draws a diagonal line in the terminal.
 *
 * @size: parameter representing the number of times
 *
 * Return: Void
 */

void print_square(int size)
{
	int i;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (i = 0; i < size; i++)
		{
			int j;

			for (j = 0; j < size; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
