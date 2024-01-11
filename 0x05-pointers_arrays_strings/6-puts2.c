#include "main.h"

/**
 * puts2 - Write a function that prints every other character of a string,
 * starting with the first character, followed by a new line.
 *
 * @str: pointer to the first address on the string
 *
 * Return: void
 */

void puts2(char *str)
{
	int i, length;

	length = strlen(str) - 1;
	for (i = 0; i < length; i += 2)
		_putchar(*(str + i));
	_putchar('\n');
}
