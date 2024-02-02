#include "main.h"

/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix
 * @a: pointer to the first element of the matrix
 * @size: size of the matrix
 */
void print_diagsums(int *a, int size)
{
	int i;
	int primary = 0;
	int secondary = 0;

	for (i = 0; i < size; i++)
	{
		if (i == j)
		{
			primary += a[i * size + j];
		}
		if ((i + j) == (size - 1))
		{
			secondary += a[i * size + j];
		}
	}
	printf("%d, %d\n", primary, secondary);
}

