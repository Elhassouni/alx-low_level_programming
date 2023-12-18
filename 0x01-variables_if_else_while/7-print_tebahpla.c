#include <stdio.h>

/**
 * main -program that prints the lowercase alphabet in reverse, followed.
 *
 * Description using 'while' loop and putchar only to print digit
 * Return: 0 (success
 */
int main(void)
{

	int num = 'z';

	/*print alphabet in rever */
	while (num >= 'a')
	{
		putchar(num);
		num--;
	}

	putchar('\n');
	return (0); /* return 0 if succes */

}
