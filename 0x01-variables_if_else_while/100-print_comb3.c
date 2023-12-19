#include <stdio.h>

/**
 *main - program that prints all possible different combinations of two digits
 *
 * Description using nested 'while' loop and putchar only to print digit
 * Return: 0 (success)
 */
int main(void)
{	
	int i;
	int j;
	
	for (i= 0; i <= 9; i++)
	{
	 for (j = i + 1; j <= 9; j++)
	{
			putchar(i + '0');
			putchar(j + '0');
			if (i < 8 && j < 10)
			{
				putchar(',');
				putchar(' ');
			}
	}
}
	putchar('\n');
	return (0); /* Return 0 (success) */
}
