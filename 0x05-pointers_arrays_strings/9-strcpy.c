#include "main.h"

/**
 * _strcpy -  function that copies the string pointed to by src,
 * including the terminating null byte (\0), to the buffer pointed to by dest.
 *
 * @dest: pointer to the first address on the string.
 * @src: size of array.
 *
 * Return: return pointer dest.
 */

char *_strcpy(char *dest, char *src)
{

	int i, length;

	length = strlen(src);
	for (i = 0; i < length; i++)
	{
		dest[i] = src[i];
	}
	if (i == length)
	{
		dest[i] += '\0';
	}
}
