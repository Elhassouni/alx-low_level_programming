#include "main.h"

/**
 * print_diagonal - function that draws a diagonal line in the terminal.
 *
 * @n: parameter representing the number of times
 * the character '\' should be printed.
 *
 * Return: Void
 */
void print_diagonal(int n)
{
	int i;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (i = 0; i < n; i++)
		{
			int j;

			for (j = 0; j < i; j++)
			{
				_putchar(32);
			}
			_putchar(92);
			_putchar('\n');
		}
	}
}
