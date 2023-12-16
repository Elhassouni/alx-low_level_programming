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
	/* I used modelo operator to get the last digit*/
	int n;
	int lastnumber;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastnumber = n % 10;
	if (lastnumber > 5)
	{
	printf("Last digit of %d is %d is greater than 5\n", n, lastnumber);
	}
	else if (lastnumber == 0)
	{
	printf("Last digit of %d is %d and is 0\n", n, lastnumber);
	}
	else if (lastnumber < 6 && lastnumber != 0)
	{
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastnumber);
	}
	return (0); /*Return 0 for success*/
}
