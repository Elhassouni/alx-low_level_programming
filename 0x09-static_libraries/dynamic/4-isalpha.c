#include <stdio.h>
#include "main.h"
#include <ctype.h>

/**
  * _isalpha - function that checks for alphabetic character.
  *
  * @c: The character to check.
  *
  *  Description: This function uses an if statement to return 1
  *  if the character is alphabetic, and 0 otherwise.
  *
  * Return: 1 if the character is lowercase, 0 otherwise.
  */

int _isalpha(int c)
{
	if (isalpha(c))
		return (1);
	else
		return (0);

	return (0);
}
