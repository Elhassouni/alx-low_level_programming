#include "main.h"

/**
 * print_array - function that prints n elements of an array of integers.
 *
 * @a: pointer to the first address on the string.
 * @n: size of array.
 *
 * Return: void
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d ", a[i]);
		if (i < n - 1)
		{
			putchar(',');
			putchar(' ');
		}
	}
	printf("\n");
}
