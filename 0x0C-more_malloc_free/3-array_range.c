#include "main.h"

/**
  * array_range -  creates an array of integers. using [malloc]
  * and returns a pointer to the first element.If [malloc] fails,
  * the function returns (NULL).
  *
  * @min: The minimum value in the array .
  * @max: The maximum value in the array .
  *
  * Return: A pointer to the dynamically allocated array on success,
  * or NULL on failure.
  */

int *array_range(int min, int max)
{
	int i, size;
	int *ptr;

	if (min > max)
	{
		return (NULL);
	}
	/* getting size to allocate memory*/
	size = (max - min) + 1;
	ptr = malloc(size * sizeof(int));
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; min <= max; i++)
	{
		ptr[i] = min;
		min++;
	}
	return (ptr);
}
