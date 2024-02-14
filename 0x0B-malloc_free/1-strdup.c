#include <stdlib.h>

/**
 * _strdup - Duplicates a string.
 * @str: The input string.
 *
 * Description:  function that returns a pointer to a newly allocated
 * space in memory, which contains a copy of the string given as a parameter.
 * [The strdup() in [man page]]function returns a pointer to a new string which
 * is a duplicate of the string s.  Memory for the new string is obtained
 * with malloc(3), and can be freed with free(3).
 *
 *
 * Return: A pointer to the duplicated string, or NULL if str is NULL
 *         or if memory allocation fails.
 */
char *_strdup(char *str)
{
	size_t i, length;
	char *ptr;

	length = 0;
	if (!str)
	{
		return (NULL);
	}
	/* get length*/
	while (str[length] != '\0')
	{
		length++;
	}
	ptr = malloc(sizeof(char) * (length) + 1);
	if (ptr == NULL)
	{
		/* Handle malloc failure */
		return (NULL);
	}
	for (i = 0; i < length; i++)
	{
		ptr[i] = str[i];
	}
	ptr[length] = '\0';

	return (ptr);
}
