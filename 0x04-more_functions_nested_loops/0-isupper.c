#include "main.h"
#include <ctype.h>

/**
  * _isupper -  function that checks for uppercase character.
  *
  * @c: paramater to be check
  *
  * Return: return 1 for upper || return 0 otherwise
  *
  */

int _isupper(int c)
{
	if (isupper(c))

		return (1);
	else
		return (0);
}
