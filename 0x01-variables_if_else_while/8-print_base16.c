#include <stdio.h>

/**
 * main -program tt prints all the numbers of base 16 in lowercase.
 *
 * Description using 'while' loop and putchar only to print digit
 * Return: 0 (success
 */
int main(void)
{

	int num = 0;
	char a = 'a';
	/*printing based 16 in lowercase*/
	while (num <= 9)
	{
		putchar(num + '0');
		num++;
	}

	/*printing based 16 hexadecimal starting from a-f */
	while (a <= 'f')
	{
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0); /* return 0 if succes */
}
