#include "main.h"

/**
 * reset_to_98 - function that takes a pointer to an int as parameter
 * and updates the value it points to to 98 
 *
 * Return: void 
 */

void swap_int(int *a, int *b)
{
	*a = &b;
	*b = &a;
}
