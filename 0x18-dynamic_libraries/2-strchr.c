#include <stdio.h>
#include <string.h>

/**
 * _strchr - Locates the first occurrence of a character in a string.
 *
 * @s: The string to search.
 * @c: The character to locate.
 *
 * Return: If the character is found, returns a pointer to the first
 * occurrence of the character in the string. If the character is not
 * found, returns NULL. I used s + i to get the address in the ith position
 */
char *_strchr(char *s, char c)
{
	size_t i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	if (c == '\0')
	{
		return (s + i);
	}
	return (NULL);
}

