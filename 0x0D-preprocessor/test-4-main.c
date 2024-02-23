#include <stdio.h>
#define SUM(x, y) ((x) + (y))

/**
 * main - check the code .
 *
 * Return: Always 0.
 */
int main(void)
{
#ifndef SUM
	printf("The macro 'SUM' is not defined\n");
	return (1);
#else
	printf("%d\n", SUM(2048, 4096) * 5);
	return (0);
#endif
}
