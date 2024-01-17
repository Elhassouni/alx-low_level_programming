#include "main.h"

/**
 * _atoi - Converts a string to an integer.
 * @s: The input string.
 *
 * Return: The integer value.
 */

int _atoi(char *s)
{
	int res, i, sign;

	sign = 1;
	i = 0;
	res = 0;

	int digitFound;

	digitFound = 0;  /* Flag to track if at least one digit is found */

	while ((s[i] >= 9 && s[i] <= 13) || s[i] == 32)
	{
		i++;
	}
	while (s[i] == '+' || s[i] == '-')
	{
		sign = (s[i] == '-') ? -1 : 1;
		i++;
	}

	for (; s[i] != '\0'; i++)
	{
		if (s[i] >= '0' && s[i] <= '9')
	{
		int digitValue = s[i] - '0';

		res = res * 10 + digitValue;
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
