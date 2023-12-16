#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* main - program to print positive and negative number
 *
 *Description:  print whether the number stored in the variable n is positive or negative.
 *
 *return: alawys 0 (sucess)
 */
int main(void)
{
	/*we take n and compare it with 0 to see negative or positive */
	
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	
	if (n > 0)
	{
		printf("%d is positive", n);
	}
	else if (n < 0)
	{
		printf("%d is negative", n);
	}
	else
	{
		printf("%d is zero", n);
	}
	return (0); /* return 0 for sucess and 1 for erorr*/
}
