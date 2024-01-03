#include "main.h"

/**
 * fizz_bazz - function that prints Fizz, Buzz, or FizzBuzz
 * based on certain conditions.
 *
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

		n = i % 3 == 0;
		n_2 = i % 5 == 0;
		if (n == 0 && n_2 == 0)
		{
			printf("FizzBuzz");
		}
		else if (n == 0)
		{
			printf("Fizz");
		}
		else if (n_2 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d ", i);
		}
		if (i < num)
		{
			_putchar(' ');
		}
	}
	printf("\n");
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */

int main(void)
{
	fizz_bazz(100);

	return (0);
}
