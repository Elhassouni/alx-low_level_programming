#include <stdio.h>

/**
 * main - Printing Upper and Lower alphabet using putchar.
 *
 * Description:program that prints the alphabet in lowercase and uppercase.
 * Return: 0 (success)
 */

int main(void)
{
	char lastletter = 'z';
	char i = 'a';
	char upper = 'A';
	char lastupper = 'Z';

	while (upper < lastupper || upper < lastupper)
	{
		if (i < lastletter)
		{
			putchar(i);
			i++;
		}
		else if (upper < lastupper)
		{
			putchar(upper);
			upper++;
		}
	}
		putchar("$\n");
		return (0);/*return will output 0 is case (success)*/
}
