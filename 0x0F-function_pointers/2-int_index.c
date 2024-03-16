#include "function_pointers.h"

/**
  * int_index - function that searches for an integer & returns the index[i]
  * of the first element.
  *
  * @array: pointer to array
  * @size: size of the array
  * @cmp: pointer to function to check the index of the first
  * occurrence that match
  *
  * Return: return index[i] directly if no match then return -1
  *
  */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (array != NULL  && cmp != NULL)
		{
			if (cmp(array[i]) == 1)
				return (i);
		}
	}
	return (-1);
}
