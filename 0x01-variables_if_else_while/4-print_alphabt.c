#include <stdio.h>

/**
 *main - Print all the letters except q and e with new line
 *
 * Description:program that prints the alphabet in lowercase.
 * Return: 0 (success)
 */

int main(void)
{

	char i = 'a';
	/* Print 'a' -- 'z' */
	while (i <= 'z')
	{	
		if (i == 'q' || i == 'e')
		{
			i++;
		}
		else
		{
			putchar(i);
			i++;
		}
	}
	putchar('\n');
	return (0);/*return will output 0 is case (success)*/
}
