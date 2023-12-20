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
	char letter[9] = "_putchar";
	int i;

	for (i = 0; i <= 9; i++)
	{
		_putchar(letter[i]);
	}
	_putchar('\n');

	return (0);
}
