#include <stdio.h>

/**
 * _strpbrk - locates any occurrences in the string [s]
 *            of any of the bytes in the string [accept] and
 *            returns the address of the match, which is the
 *            location within the string s.
 * @s: The string to search in.
 * @accept: The string containing characters to search for.
 *
 * Return: Address of the first matching character in [s],
 *         or NULL if no match is found.
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				return (&s[i]);
			}
		}
	}
	return (NULL);
}

