#include "main.h"

/**
  * string_nconcat - Concatenates n characters from s2 to s1
  * @s1: The destination string
  * @s2: The source string
  * @n: The number of characters to concatenate
  *
  * Description:
  * This function concatenates n characters from s2 to s1.
  * It allocates memory for the resulting string.
  *
  * Return: A pointer to the concatenated string or NULL on failure.
  */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	size_t i, j, length1, length2;
	char *ptr;

	length1 = 0;
	length2 = 0;
	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[length1] != '\0')
	{
		length1++;
	}
	while (s2[length2] != '\0')
	{
		length2++;
	}
	ptr = malloc(sizeof(char) * ((length1 + n) + 1));
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (j = 0; j < length1; j++)
	{
		ptr[j] = s1[j];
	}
	for (i = 0; i < n && i < length2; i++, j++)
	{
		ptr[j] = s2[i];
	}
	ptr[j] = '\0';
	return (ptr);
}
