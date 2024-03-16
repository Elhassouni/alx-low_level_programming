#include <stdio.h>
#include "function_pointers.h"

/**
  * array_iterator - function that executes a function given
  * as a parameter on each element of an array.
  *
  * @array: array of integer.
  * @size: size of the array.
  * @action: function pointer that takes int as argument.
  *
  */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	i = 0;
	while (i <= size)
	{
		action(array[i]);
		i++;
	}
}
