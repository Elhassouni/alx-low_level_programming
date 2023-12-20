#include "main.h"

/**
  *
  * main - Program to print "_putchar" followed with new line
  *
  *Description: I will use a function to print the string
  *
  *Return: return 0 if program exit with (success)
  */

int main(void)
{
	char letter[10] = "_putchar\n";
	int i;

	for (i = 0; i <= 10; i++)
	{
		_putchar(letter[i]);
	}
	
	return (0);
}
