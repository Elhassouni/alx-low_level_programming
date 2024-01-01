#include <stdio.h>

/**
 * print_times_table - Prints the times table up to a given number.
 * @n: The number up to which the times table is printed.
 *
 * Description: This function prints the times table up to the given number (n).
 * The function ensures that the output is formatted correctly.
 */

void print_times_table(int n)
{
	int i, j, number;

	i = 0;
	if (n != 0 && n <= 15)
	{
		while (i <= n)
		{
			j = 0;
			while (j <= n)
			{
				number = i * j;
				if (j != 0)
				{
					if (number <= 9)
					{
						putchar(',');
						putchar(' ');
						putchar(' ');
						putchar(' ');
					}
					else if (number <= 99)
					{
						putchar(',');
						putchar(' ');
						putchar(' ');
					}
					else
					{
						putchar(',');
						putchar(' ');
					}
				}

				if (number < 10)
				{
					putchar('0' + number);
				}
				else if (number < 100)
				{
					putchar('0' + (number / 10));
					putchar('0' + (number % 10));
				}
				else
				{
					putchar('0' + (number / 100));
					putchar('0' + ((number / 10) % 10));
					putchar('0' + (number % 10));
				}

				j++;
			}

			printf("\n");
			i++;
		}
	}
}
