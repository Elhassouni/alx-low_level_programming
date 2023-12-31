#include <stdio.h>

/**
 *main-  Printing the size of various types
 *
 *Description: printing sizeof function to get the sizeof data types.
 *
 *Return: Return 0 in (success)
 */

int main(void)
{
	/* printing all various data types*/
	printf("Size of a char: %lu byte(s)\n", sizeof(char));
	printf("Size of an int: %lu byte(s)\n", sizeof(int));
	printf("Size of a long int: %lu byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(long long int));
	printf("Size of a float: %lu byte(s)\n", sizeof(float));
	return (0);/*return will exit with 0 when program (sucess)*/
}
