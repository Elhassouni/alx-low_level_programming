#include "variadic_functions.h"

/**
  * sum_them_all - variadic function that return sum
  *
  * @n: number of element in function parameters
  *
  * Return: returns the sum;
  */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, result;

	va_list count;

	va_start(count, n);

	i = 0;
	result = 0;
	if (n == 0)
	{
		return (0);
	}

	while (i < n)
	{
		result += va_arg(count, int);
		i++;
	}
	va_end(count);
	return (result);
}
