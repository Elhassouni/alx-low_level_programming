#include "variadic_functions.h"

/**
  * print_numbers - function that prints number followed by new line
  *
  * @separator: string pointer takes comma or null
  * @n: number of element in the argument function.
  *
  */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list elem;

	va_start(elem, n);

		if (separator != NULL)
		{
			unsigned int a;

			for (a = 0; a < n; a++)
			{
				printf("%d", va_arg(elem, int));
				if (a < n - 1)
				{
					printf("%s", separator);
				}
			}
		}
		else
		{
			unsigned int j;

			for (j = 0; j < n; j++)
			{
				printf("%d", va_arg(elem, int));
			}
		}
	va_end(elem);
	printf("\n");
}
