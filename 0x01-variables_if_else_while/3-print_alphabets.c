#include <stdio.h>

/**
 * main - Printing Upper and Lower alphabet using putchar.
 *
 * Description:program that prints the alphabet in lowercase and uppercase.
 * Return: 0 (success)
 */

int main(void)
{
	
	char i = 'a';
	char upper = 'A';
	
	/* Print 'a' -- 'z' */
	while	(i <= 'z')
	{
		putchar(i);
		i++;
	
	}
	while	(upper <= 'Z')
		{
			putchar(upper);
			upper++;
			
		}
		putchar('\n');
		return (0);/*return will output 0 is case (success)*/
}
