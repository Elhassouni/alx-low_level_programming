#include "main.h"

/**
  * print_most_numbers -  function prints numbers, from 0 to 9
  * followed  by a new line. Except 2 and 4.
  *
  * Return: Void
  *
  */

void print_most_numbers(void)
{

	int i;

	for (i = 0; i < 10; i++)
	{
		if (i != 2 && i != 4)
			_putchar('0' + i);
	}
	_putchar('\n');
}
