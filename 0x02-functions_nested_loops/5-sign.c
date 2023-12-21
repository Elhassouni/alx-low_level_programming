#include <stdio.h>
#include "main.h"

/**
  * print_sign - function that checks for alphabetic character.
  *
  * @n: The character to check.
  *
  *  Description: This function uses an if statement to return 1 and + sign
  *  if positive and 0 if below zero and negative sign otherwise
  *
  * Return:  0 for succes and 1  otherwise.
  */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar(0);
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
	return (0);
}
