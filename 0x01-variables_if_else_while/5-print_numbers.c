#include <stdio.h>

/**
 * main - program that prints all single digit numbers of base 10 to 0
 *
 * Description using 'while' loop and printf to print digit
 * Return: 0 (success
 */
int main(void)
{

	int num = 0;

	/*print numbers from 0 to 9 */
	while (num <= 10)
	{
		printf("%d,"num);
	}

	printf("\n");
	return (0); /* return 0 if succes */

}
