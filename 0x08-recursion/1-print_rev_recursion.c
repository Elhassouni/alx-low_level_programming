#include "main.h"

/**
 * _print_rev_recursion - Prints a string in reverse using recursion.
 * @s: The string to be printed.
 *
 * This function reverses a string using recursion and prints each character
 * in reverse order.
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;  /* Base case: stop recursion when the null terminator is reached */
	}
	else
	{
		_print_rev_recursion(s + 1);
		putchar(*s);  /* Print the current character after the recursive call */
	}
}

