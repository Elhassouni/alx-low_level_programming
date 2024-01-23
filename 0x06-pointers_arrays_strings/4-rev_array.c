#include "main.h"

/**
 * reverse_array - Reverses the elements of an integer array in place.
 *
 * @a: Pointer to the integer array.
 * @n: Number of elements in the array.
 */

void reverse_array(int *a, int n)
{
	int i, end;

	i = 0;
	end = n - 1;

	for (; i < end; i++)
	{
		int temp;

		temp = a[i];
		a[i] = a[end];
		a[end] = temp;
		end--;
	}
}
