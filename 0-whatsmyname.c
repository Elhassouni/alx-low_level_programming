#include "main.h"

/**
  * main - function print the argv first element which is the name
  *
  * @argc: number of element.[argument count] contains the number of arguments.
  * @argv: [argument vector] one dimensional array of strings.
  *	each string is one of the rguments that was passed to the program.
  *
  * Return: return 0 for success.
  */


int main(int argc, char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
