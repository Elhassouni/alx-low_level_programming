#include "main.h"

/**
  * _calloc -  function that allocates memory for an array, using malloc.
  *  and initializing every byte with 0.
  *
  * @nmemb: number of elements on the array
  * @size: size of the elements in bytes
  *
  * Return: returns a pointer to the allocated memory.
  */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *ptr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < nmemb * size; i++)
	{
		ptr[i] = 0;
	}
	return (ptr);
}
