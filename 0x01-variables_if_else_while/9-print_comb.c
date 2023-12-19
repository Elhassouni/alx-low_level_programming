#include <stdio.h>

/**
 * main - program that prints all possible combinations of single-digit numbers
 *
 * Description using 'while' loop and putchar only to print digit
 * Return: 0 (success)
 */
int main(void)
{
	int num = 0;
	/*printing numbers followed by comma and space */
	while (num <= 9)
	{
		putchar(num + '0');
		if (num != 9)
		{
			putchar(',');
			putchar(' ');
		}
		num++;
	}
	putchar('\n');
	return (0); /* return 0 in success(0) */
}
