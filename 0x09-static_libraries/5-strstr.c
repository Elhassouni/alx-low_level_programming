#include "main.h"

/**
 * _strstr - locates the first occurrence of a substring needle
 *  on the string and Returns a pointer to the beginning
 * of the located substring, or NULL if the substring is not found.
 *
 * @haystack: The string to search in.
 * @needle: The substring to find.
 *
 * Return: A pointer to the beginning of the located substring,
 *         or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int i, j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i + j] != needle[j])
			{
				break;
			}
		}
		if (needle[j] == '\0')
		{
			return (&haystack[i]);
		}
		if (haystack[i] == '\0')
		{
			return (&haystack[i]);
		}
	}
	return (NULL);
}
