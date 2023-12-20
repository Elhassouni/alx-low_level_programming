#include <stdio.h>

/**
 *main - program  prints all possible different combinations of three digits.
 *
 * Description using nested for-loop and putchar only to print digit
 * Return: 0 (success)
 */
int main(void)
{
	int i;
	int j;
	int k;
	int lastcombination = 0;

	for (i = 0; i <= 9; i++)
	{
		for (j = i + 1; j <= 9; j++)
		{
			for (k = j + 1; k <= 9; k++)
			{
				putchar(i + '0');
				putchar(j + '0');
				putchar(k + '0');
				if (i == 7 && j == 8 && k == 9)
				{
					lastcombination = 1;
				}
				if (!lastcombination)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0); /* Return 0 (success) */
}
