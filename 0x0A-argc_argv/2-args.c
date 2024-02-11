#include "main.h"

/**
  * main - Function prints all arguments it receives.
  *
  * @argc: number of elements.
  * @argv: pointer array of strings starting at [0].
  *
  * Return: return 0 for success and 1 otherwise.
  *
  */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
