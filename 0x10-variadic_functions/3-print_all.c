#include "variadic_functions.h"

/**
 * _char - print a char
 *
 * @arg: a list of argument pointing
 *      to the character to be printed
 *
 * Return: nothing
*/

void _char(va_list arg)
{
	char c = va_arg(arg, int);

	printf("%c", c);
}

/**
 * _int - print an integer
 *
 * @arg: a list of argument pointing
 *      to the character to be printed
 *
 * Return: nothing
*/

void _int(va_list arg)
{
	int n = va_arg(arg, int);

	printf("%d", n);
}

/**
 * _float - print a float
 *
 * @arg: a list of argument pointing
 *      to the character to be printed
 *
 * Return: nothing
*/

void _float(va_list arg)
{
	float n = va_arg(arg, double);

	printf("%f", n);
}

/**
 * _string - print a string
 *
 * @arg: a list of argument pointing
 *      to the character to be printed
 *
 * Return: nothing
*/

void _string(va_list arg)
{
	char *str = va_arg(arg, char *);

	if (!str)
	{
		printf("(nil)");
		return;
	}
	printf("%s", str);
}

/**
 * print_all - a function that prints anything
 *
 * @format: A string of character representing
 *          the argument types
 *
 * Description: If any argument not of type char,
 *              int, float or char * is ignored
 *
 * Return: nothing
*/
void print_all(const char * const format, ...)
{
	unsigned int i, j;
	va_list ap;
	char *separator = "";
	symbols allfunctions[] = {
		{'i', _int},
		{'f', _float},
		{'c', _char},
		{'s', _string}
	};
	va_start(ap, format);

	while (format && format[i])
	{
		j = 0;
		while (j < 4 && (format[i] != allfunctions[j].c))
			j++;
		if (j < 4)
		{
			printf("%s", separator);
			allfunctions[j].func(ap);
			separator = ", ";
		}
		i++;
	}
}
