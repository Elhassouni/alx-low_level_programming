#include <stdio.h>
#include "main.h"
#include <ctype.h>

/**
  * _islower -function that checks for lowercase character.
  *
  * @c: The character to check.
  *
  *  Description: This function uses an if statement to return 1
  *  if the character is lowercase, and 0 otherwise.
  *
  * Return: 1 if the character is lowercase, 0 otherwise.
  */

int _islower(int c)
{
	if (islower(c))
		return (1);
	else
		return (0);

	return (0);
}
