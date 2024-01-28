#include "main.h"

/**
 * _strspn - calculates the length of the initial segment of s
 * consisting entirely of characters in accept.
 *
 * @s: the string to be examined.
 * @accept: the substring set of characters to match
 *
 * Return: the number of bytes in the initial segment of s.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;
	int len, flag;

	len = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		flag = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				len++;
				flag = 1;
				break;
			}
		}
		if (flag == 0)
		{
			return (len);
		}
	}
	return (len);
}
