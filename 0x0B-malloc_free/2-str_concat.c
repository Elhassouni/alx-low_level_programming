#include "main.h"
/**
 * str_concat - The Fucntion Concatenate two strings using malloc.
 * @s1: The first string.
 * @s2: The second string.
 * Return: A pointer to the concatenated string,
 * or NULL if memory allocation fails.
 */
char *str_concat(char *s1, char *s2)
{
	size_t j, i, size_1, size_2, length;
	char *ptr;

	size_1 = 0;
	size_2 = 0;
	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";
	while (s1[size_1] != '\0' ||  s2[size_2] != '\0')
	{
		if (s1[size_1] != '\0')
		{
			size_1++;
		}
		else
		{
			size_2++;
		}
	}
	length = size_1 + size_2;
	    /* Allocate memory for the concatenated string */
	ptr = malloc(sizeof(char) * (length + 1));
	if (ptr == NULL)
	{
		return (NULL);
	}
	/* Copy characters from s1 to the concatenated string */
	for (i = 0; i < size_1; i++)
	{
		ptr[i] = s1[i];
	}
	/* Copy characters from s2 to the concatenated string */
	for (j = 0; j < size_2; i++, j++)
	{
		ptr[i] = s2[j];
	}
	ptr[length] = '\0';

	return (ptr);
}
