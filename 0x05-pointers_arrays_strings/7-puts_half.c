#include "main.h"

/**
 * puts_half - Write a function that prints half of a string &  new line.
 *
 * @s: pointer to the first address on the string
 *
 * Return: void
 */
void puts_half(char *s)
{
	int i, length, half;

	length = strlen(s);
	half = (length + 1) / 2;
	for (i = half; i < length; i++)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
