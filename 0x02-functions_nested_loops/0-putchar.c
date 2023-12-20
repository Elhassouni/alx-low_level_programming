#include "main.h"

/**
  * main - Entry point for the program
  *
  * Description: I will use a function to print the string
  *
  * Return: return 0 if program exit with (success)
  */

int main(void)
{	/*printing "putchar" with for loop and putchar fuction using header*/
	char letter[] = "_putchar";
	int i;

	for (i = 0; i <= 8; i++)
	{
		_putchar(letter[i]);
	}
	_putchar('\n');

	return (0);
}
