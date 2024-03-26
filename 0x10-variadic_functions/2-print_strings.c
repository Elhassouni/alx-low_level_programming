#include "variadic_functions.h"

/**
  * print_strings - function to print numbers followed with new line.
  *
  * @separator: string literal.
  * @n: number of arguments passed to variadic function.
  *
  *
  *
  */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list elem;
	unsigned int i;
	char *ptr;

	va_start(elem, n);

	i = 0;
	if (separator != NULL)
	{
		for (; i < n; i++)
		{
			ptr =  va_arg(elem, char *);
			if (ptr == NULL)
			{
				printf("(nil)");
			}
			printf("%s", ptr);
			if (i < n - 1)
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
			char *ptr2 = va_arg(elem, char *);

			if (ptr2 == NULL)
			{
				printf("(nil)");
			}
			printf("%s", ptr2);
		}
	}
	va_end(elem);
	printf("\n");
}
