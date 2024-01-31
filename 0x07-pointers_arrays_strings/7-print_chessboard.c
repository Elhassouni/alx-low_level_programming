#include "main.h"

/**
  * print_chessboard - Function to print the chessboard.
  *
  * @a: Pointer to a 2D array representing the chessboard.
  */

void print_chessboard(char (*a)[8])
{
	size_t i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
			if (j == 7)
			{
				printf("\n");
			}
		}
	}
}
