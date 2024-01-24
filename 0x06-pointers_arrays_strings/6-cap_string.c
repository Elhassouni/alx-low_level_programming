#include "main.h"

/**
 * cap_string - Capitalizes all words of a string.
 * @s: The input string.
 *
 * Return: A pointer to the modified string.
 */
char *cap_string(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if ((i == 0 || s[i - 1] == 9 /* ASCII for '\t' */ ||
s[i - 1] == 10 /* ASCII for '\n' */ || s[i - 1] == 32 /* ASCII for ' ' */ ||
s[i - 1] == 33 /* ASCII for '!' */ || s[i - 1] == 34 /* ASCII for '"' */ ||
s[i - 1] == 40 /* ASCII for '(' */ || s[i - 1] == 41 /* ASCII for ')' */ ||
s[i - 1] == 46 /* ASCII for '.' */ || s[i - 1] == 59 /* ASCII for ';' */ ||
s[i - 1] == 63 /* ASCII for '?' */ || s[i - 1] == 123 /* ASCII for '{' */ ||
s[i - 1] == 125 /* ASCII for '}' */) && (s[i] >= 'a' && s[i] <= 'z'))
		{
			s[i] -= 32; /* Convert to uppercase */
		}
		i++;
	}

	return (s);
}

