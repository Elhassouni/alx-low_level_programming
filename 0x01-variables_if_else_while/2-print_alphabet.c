#include <stdio.h>

/**
 * main - writing alphabet using putchar with new line
 *
 * Description:program that prints the alphabet in lowercase.
 * Return: 0 (success)
 */

int main(void)
{
	char lastletter = 'z';
	char i = 'a';

	while (i < lastletter)
	{
		putchar(i);
		putchar('\n');
		i++;
	}
	return (0);/*return will output 0 is case (success)*/

}
