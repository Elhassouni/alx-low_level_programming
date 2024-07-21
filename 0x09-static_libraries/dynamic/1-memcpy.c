#include <stdio.h>

/**
 * _memcpy - Copies memory area from source to destination
 *
 * @dest: Destination memory area
 * @src: Source memory area
 * @n: Number of bytes to copy
 *
 * Return: Pointer to destination memory area
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	size_t	i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
