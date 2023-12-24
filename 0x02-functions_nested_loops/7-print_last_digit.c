#include <stdlib.h>
#include <limits.h>
#include "main.h"

/**
  * print_last_digit - function that prints the last digit of a number.
  *
  * @number: paramater used to get the last digit using modulu operator
  *
  * Description: getting the last digit using modulu operator
  *
  * Return:  returns the last digit using variable
  */
int print_last_digit(int number)
{

	if (number != INT_MIN)
	{
		int a = abs(number) % 10;

		_putchar('0' + a);
		return (a);
	}
	else if (number == INT_MIN)
	{
		_putchar('0' + 8);
		return (8);
	}

	return (0);
}
