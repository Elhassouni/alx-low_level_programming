#include <stdio.h>
#include "main.h"

/**
  * print_alphabet_x10 -prints 10 times the alphabet, in lowercase.
  *
  * Description: using while loop with local variable.
  */
void print_alphabet_x10(void)
{
	int i = 97;
	int num = 10;

	while (num > 0)
	{
		while (i <= 122)
		{
			_putchar(i);
			i++;
		}
		_putchar('\n');
		num--;
		i = 97;
	}
}
