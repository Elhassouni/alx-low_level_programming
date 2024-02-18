#include "main.h"

/**
  * malloc_checked -  function that allocates memory using malloc.
  *
  * @b: bytes that need to be allocated
  *
  * Return: pointer to our new allocated memory AND
  * exit with 98 if malloc fails
  */

void *malloc_checked(unsigned int b)
{
	int *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
