#include "main.h"

/**
 * print_rev - Function prints reverse string with a new line.
 *
 * @s: pointer to the first address on the string
 *
 * Return: void
 */

void print_rev(char *s)
{
	int i, lenght;

	lenght = strlen(s);

	for (i = lenght - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}





