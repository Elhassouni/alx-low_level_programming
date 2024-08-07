#include<stdio.h>
#include "search_algos.h"
#include<stdlib.h>

/**
 * linear_search - searches for a value in an array of integers using the
 *                 linear search algorithm O(n)
 *
 * @array: pointer to the first element of the array to search in.
 * @size: number of elements in the array.
 * @value: the value to search for.
 *
 * Return: the first index where value is located, or -1 if the value is
 *         not present in the array or if the array is NULL
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}
