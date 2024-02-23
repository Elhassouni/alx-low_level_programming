#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description:
 * This is the main function, serving as the entry point for the program.
 * It prints the name of the current source file, obtained using the __FILE__
 * macro, followed by a new line. This simple program is designed to 
 * demonstrate the use of __FILE__ to obtain information about the source
 * file during runtime.
 *
 * Return: Always returns 0 to indicate successful execution.
 *
 */

int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
