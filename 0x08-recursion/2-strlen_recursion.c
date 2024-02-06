#include "main.h"

/**
 * _strlen_recursion - Calculates the length of a string using recursion.
 * @s: The string to calculate the length for.
 *
 * This function recursively calculates the length of a string by counting
 * the number of characters until the null terminator is encountered.
 *
 * Return: The length of the string.
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}

