#include <stdio.h>
#include "main.h"

/**
  * print_alphabet - Printing alphabet in lowercase.
  *
  * Description: using while loop with local variable.
  */
void print_alphabet(void)
{
	int i = 97;

	while (i <= 122)
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');

}
