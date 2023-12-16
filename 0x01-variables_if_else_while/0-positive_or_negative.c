#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - program to print positive and negative number
 *
 * Description: Print whether the number stored in n is positive or negative
 *
 * Return: alawys 0 (sucess)
 */

int main(void)
{
	int n;


	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	else
	{
		printf("%d is zero\n", n);
	}
	return (0);/*Return 0 for success*/
}
