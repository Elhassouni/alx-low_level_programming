#include <stdio.h>
#include <string.h> 

/**
 * function that copies the string pointed to by src,
 * including the terminating null byte (\0), to the buffer pointed to by dest.
 *
 * @dest: pointer to the first address on the string.
 * @src: size of array.
 *
 * Return: void
 */

char *_strcpy(char *dest, char *src)
{

	int i, length;

	length = strlen(src);
	for (i = 0; i < length; i++)
	{
		dest[i] = src[i];
	}
	if (i == length)
	{
		dest[i] += '\0';
	}
	return dest;
}
int main(void)
{
    char s1[98];
    char *ptr;

    ptr = _strcpy(s1, "First, solve the problem. Then, write the code\n");
    printf("%s", s1);
    printf("%s", ptr);
    return (0);
}
