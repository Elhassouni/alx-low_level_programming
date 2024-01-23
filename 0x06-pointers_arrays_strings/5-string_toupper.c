#include "main.h"

/**
 * string_toupper - Converts all lowercase letters in a string to uppercase.
 * @n: Pointer to the input string.
 *
 * Return: Pointer to the modified string.
 */
char *string_toupper(char *n)
{
	while (*n != '\0')
	{
		if (*n >= 97 && *n <= 122)
		{
			*n = *n - 32; /* Convert lowercase to uppercase */
		}
		n++;
	}
	return (n);
}
