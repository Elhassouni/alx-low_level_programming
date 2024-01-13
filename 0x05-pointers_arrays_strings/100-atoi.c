#include "main.h"

/**
 * *_strcpy -  function that copies the string pointed to by src,
 * including the terminating null byte (\0), to the buffer pointed to by dest.
 *
 * @dest: pointer to the first address on the string.
 * @src: size of array.
 *
 * Return: return pointer dest.
 */


int _atoi(const char* str)
{
    int res, i, sign;

    sign = 1;
    i = 0;
    res = 0;


    while (str[i] == ' ' || str[i] == '\t'|| str[i] == '\n')
    {
        i++;
    }
    while (str[i] == '+' || str[i] == '-')
    {
        sign = (str[i] == '-') ? -1 : 1;
        i++;
    }


    for (;i < length && str[i] != '\0'; i++)
    {
        int digitvalue = str[i] - '0';
        res = res * 10 + digitvalue;

    }
    return sign * res;
}

