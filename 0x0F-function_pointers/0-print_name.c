#include "function_pointers.h"

/**
  * print_name - function that prints a name using function pointer.
  *
  * @name: string for name.
  * @f: function pointer that takes char * as parameter.
  *
  *
  */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
