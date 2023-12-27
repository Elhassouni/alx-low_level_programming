#include "main.h"

/**
 * times_table - function that prints the 9 times table, starting with 0
 *
 * Description: This function uses _putchar to print numbers.
 *
 * Return: no return type.
 */
void times_table(void)
{
	int i, j, number;

	i = 0;
	while (i < 10)
	{
		j = 0;
		while (j < 10)
		{
			number = i * j;

			if (j != 0)
			{
				if (number <= 9)
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
			}

			if (number >= 10)
			{
			_putchar('0' + number / 10);/*print first place*/
			}
			_putchar('0' + number % 10);  /* print second place */

			if (j == 9)
			{
				_putchar('\n');
			}
			j++;
		}
		i++;
	}
}

