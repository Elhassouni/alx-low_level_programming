#include "main.h"


/**
  * main -  Function that multiplies two numbers.
  * Description: print result of multiplication followed by newline.
  *
  * @argc:  number of argument.
  * @argv:  argument vector convert this the string.
  * to get the integer value to work with.
  *
  * Return: return 0 for sucess and 1 otherwise.
  *
  */

int main(int argc, char *argv[])
{
	int result;

	if (argc < 3)
	{
		printf("Error");
		return (1);
	}
	result = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", result);

	return (0);
}
