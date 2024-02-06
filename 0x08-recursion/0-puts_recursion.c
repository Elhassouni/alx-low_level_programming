#include "main.h"

/*
  * _puts_recursion - Prints a string using recursion and pointer arithmetic.
  *
  * @s: The string to be printed.
  * 
  * This function prints each character of the string followed by a recursive
  * call to print the rest of the string until the null terminator is reached.
  *
  */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}
