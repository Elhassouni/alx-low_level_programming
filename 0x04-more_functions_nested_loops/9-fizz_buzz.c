#include <stdio.h>

/**
 * fizz_bazz - prints Fizz, Buzz, or FizzBuzz based on certain conditions.
 * @num: Limit for the loop.
 *
 * Return: Always 0.
 */
void fizz_bazz(int num)
{
	int i;

	i = 0;
	for (i = 1; i <= num; ++i)
	{
		int n, n_2;

		n = i % 3;
		n_2 = i % 5;
		if (n == 0 && n_2 == 0)
		{
			printf("FizzBuzz, ");
		}
		else if (n == 0)
		{
			printf("Fizz, ");
		}
		else if (n_2 == 0)
		{
			printf("Buzz, ");
		}
		else
		{
			printf("%d, ", i);
		}
	}
	printf("\n");
}


/**
 * main - Entry point of the program.
 *
 * Return: Always 0.
 */
int main()
{
	fizz_bazz(100);
	return 0;
}
