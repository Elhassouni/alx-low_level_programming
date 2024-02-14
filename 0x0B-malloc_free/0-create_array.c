#include "main.h"

/**
  * create_array - function that creates an array of chars,
  * and initializes it with a specific char.
  *
  * @size: size of the array.
  * @c: character to fill the array with.
  *
  * Return: If size is 0 or if memory allocation fails, return NULL.
  *         Otherwise, return a pointer to the allocated memory.
  */

char *create_array(unsigned int size, char c)
{
	size_t i;
	char *str;

	/* Check if size is 0 */
	if (!size)
	{
		return (NULL);
	}
	/* Allocate memory for the array */
	str = malloc(sizeof(char) * size);
	/* Check if memory allocation is successful */
	if (str == NULL)
	{
		return (NULL);
	}
	/* Fill the array with the specified character */
	for (i = 0; i < size; i++)
	{
		str[i] = c;
	}
	/* Add null terminator to make it a valid string */
	str[size] = '\0';

	return (str);
}
