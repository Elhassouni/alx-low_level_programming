#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;
	int i = 0;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > i)
	{
		printf("%d is positive", n);
	}
	else if (n < i)
	{
		printf("%d is negative", n);
	}
	else
	{
		printf("%d is zero", n);
	}
	return (0);
}
