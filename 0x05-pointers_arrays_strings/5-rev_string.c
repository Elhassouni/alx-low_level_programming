#include "main.h"

/**
 * rev_string - Function prints reverse string ARRAY with a new line.
 *
 * @s: pointer to the first address on the string
 *
 * Return: void
 */

void rev_string(char *s)
{
	int start = 0;
	int end = strlen(s) - 1;

	while (start < end)
	{
		char temp;

		temp = s[start];
		s[start] = s[end];
		s[end] = temp;
		start++;
		end--;
	}
}
