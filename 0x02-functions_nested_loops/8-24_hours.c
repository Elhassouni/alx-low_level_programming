#include "main.h"

/**
  * jack_bauer - function that prints every minute of the day of Jack Bauer,
  * starting from 00:00 to 23:59.
  *
  * Description: function that prints 00:00 to 23:59. using 2 nested loop
  * and putchar function to print hour and minutes to standard output.
  *
  * Return: no return type.
  */

void jack_bauer(void)
{

	int hours;

	hours = 0;
	while (hours < 24)
	{
		int min = 0;

		while (min < 60)
		{
			_putchar('0' + (hours / 10) % 10);
			_putchar('0' + hours % 10);
			_putchar(':');
			_putchar('0' + (min / 10) % 10);
			_putchar('0' + min % 10);
			_putchar('\n');
			min++;
		}
	hours++;
	}
}
