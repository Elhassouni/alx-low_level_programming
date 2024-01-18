#include "main.h"

/**
 * _atoi - Converts a string to an integer.
 * @s: The input string.
 *
 * Return: The integer value.
 */

int _atoi(char *s)
{
	int i, digitFound, sign;
	int res;

	sign = 1;
	i = 0;
	digitFound = 0;  /* Flag to track if at least one digit is found */

	while ((s[i] >= 9 && s[i] <= 13) || s[i] == 32)
	{
		i++;
	}
	while (s[i] == '-')
	{
		sign = (s[i] == '-') ? -1 : 1;
		i++;
	}
	for (; s[i] != '\0'; i++)
	{
		if (s[i] >= '0' && s[i] <= '9')
	{
		res = (res * 10) + (s[i] - '0');
		digitFound = 1;
	}
		else
		{
			if (digitFound)
			{
				break;
			}
		}
	}
		return (sign * res);
}
