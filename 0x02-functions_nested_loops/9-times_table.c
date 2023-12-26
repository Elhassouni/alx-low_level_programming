#include "main.h"
#include <stdio.h>

/**
  * times_table - function that prints the 9 times table, starting with 0
  *
  * Description: This function is using putchar function to print numbers.
  *
  * Return: no return type.
  */

void times_table(void)
{

	int i;

	i = 0;
	while (i < 10)
	{
		int j;

		j = 0;
		while (j < 10)
		{
			int number = i * j;

			if (number >= 9)
			{
				_putchar('0' + number / 10);
			}
			_putchar('0' + number % 10);  /* print ones place */
			if (j == 9)
			{
				_putchar('\n');
			}
			else if (number < 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
			}
			j++;
		}
		i++;
	}
}
