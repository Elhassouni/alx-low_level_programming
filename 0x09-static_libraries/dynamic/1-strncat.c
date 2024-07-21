#include "main.h"

/**
 * _strncat - Concatenates two strings.
 *
 * @dest: The destination string.
 * @src: The source string.
 * @n: n is the maximum number of characters to concatenate.
 *
 * Return: A pointer to the resulting string.
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int length = strlen(dest);

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[length + i] = src[i];
		i++;
	}
	dest[length + i] = '\0';

	return (dest);
}
