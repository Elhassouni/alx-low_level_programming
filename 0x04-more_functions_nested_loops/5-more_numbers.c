#include "main.h"

/**
  * more_numbers - Write a function that prints 10 times the numbers,
  * from 0 to 14, followed by a new line.
  *
  * Return: Void
  *
  */

void more_numbers(void)
{

	int i, j;

	for (i = 0; i < 10; i++)
	{
		j = 0;
		for (j = 0; j < 15; j++)
		{
			if (j >= 10)
			{
				_putchar('0' + j / 10);
			}
			_putchar('0' + j % 10);
		}
	_putchar('\n');
	}
}
