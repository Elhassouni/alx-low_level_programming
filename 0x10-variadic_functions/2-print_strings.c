#include "variadic_functions.h"

/**
  * print_strings - function to print numbers followed with new line.
  * @separator: string literal.
  * @n: number of arguments passed to variadic function.
  */
void print_strings(const char *separator, const unsigned int n, ...)
{	
	va_list elem;
	unsigned int i;
	char *ptr;

	va_start(elem, n);

	i = 0;
		for (; i < n; i++)
		{
			ptr =  va_arg(elem, char *);
			if (ptr)
			{
				printf("%s", ptr);
			}
			else
			{
				printf("(nil)");
			}
			if (i != n - 1 && separator)
			{
				printf("%s", separator);
			}
		}
	va_end(elem);
	printf("\n");
}
