#include "main.h"
/**
 * leet - Encodes a string into 1337.
 * @str: The input string to be encoded.
 *
 * Return: A pointer to the modified string.
 */
char *leet(char *str)
{
	int i;
	char *s = str;
	char key[] = {'a', 'e', 'o', 't', 'l'};
	int value[] = {4, 3, 0, 7, 1};

	while (*str)
	{
		for (i = 0; i < (sizeof(key) / sizeof(char)); i++)
		{
			if (*str == key[i] || *str == key[i] - 32)
			{
				*str = '0' + value[i];
			}
		}
		str++;
	}
	return (s);
}

