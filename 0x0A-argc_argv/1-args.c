#include "main.h"

/**
  * main - function prints the number of arguments passed into it.
  * @argc: agrument counts
  * @argv:argument vector pointer array to a string that contains the arguments
  *
  * Return: return 0 for success or 1 otherwise.
  *
  */

int main(int argc, char *argv[] __attribute__((unused)))
{
	int i, x;

	x = 0;
	for (i = 1; i < argc; i++)
	{
		x = i;
	}
	printf("%d\n", x);
	return (0);
}
