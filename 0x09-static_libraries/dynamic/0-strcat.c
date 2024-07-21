#include "main.h"

/**
 * _strcat - Concatenates two strings.
 * @dest: The destination string.
 * @src: The source string.
 *
 * Return: A pointer to the resulting string.
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int len1 = strlen(src);
	int len2 = strlen(dest);

	i = 0;
	while (i < len1)
	{
		dest[len2 + i] = src[i];
		i++;
	}
	dest[len2 + i] = '\0';
	return (dest);
}

