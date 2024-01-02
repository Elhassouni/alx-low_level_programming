#include <stdio.h>

/**
 * print_times_table - Prints the times table up to a given number.
 * @n: The number up to which the times table is printed.
 *
 * Description: This function prints the times table to the given number (n).
 * The function ensures that the output is formatted correctly.
 */

void print_times_table(int n)
{
	int i, j, number;

	i = 0;
	if (n >= 0 && n <= 15)
	{
		while (i <= n)
		{
			j = 1;
			putchar('0');
			while (j <= n)
			{
				putchar(',');
				putchar(' ');
				number = i * j;
				if (number <= 9)
				{
					putchar(' ');
				}
				if (number <= 99)
				{
					putchar(' ');
				}
				if (number >= 100)
				{
					putchar('0' + (number / 100));
					putchar('0' + ((number / 10) % 10));
				}
				else if (number <= 99 && number >= 10)
				{
					putchar('0' + (number / 10));
				}
				putchar('0' + (number % 10));
				j++;
			}
			printf("\n");
			i++;
		}
	}
}
