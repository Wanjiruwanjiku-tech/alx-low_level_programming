#include "main.h"
#include <stdio.h>

/**
*leet - A function that encodes a string into 1337
*Description: Use one if statement and two loops
*witout using switch or ternary operations
*@str: Pointer to string
*Return: A char type value
*/
char *leet(char *str)
{
	char *ptr = str;

	while (*ptr)
	{
		ptr++;
	}
	ptr--;

	while (str <= ptr)
	{
		if (*str == 'a' || *str == 'A')
		{
			*str = '4';
		}
		else if (*str == 'e' || *str == 'E')
		{
			*str = '3';
		}
		else if (*str == 'o' || *str == 'O')
		{
			*str = '0';
		}
		else if (*str == 't' || *str == 'T')
		{
			*str = '7';
		}
		else if (*str == 'l' || *str == 'L')
		{
			*str = '1';
		}
		str++;
	}
	return (ptr);
}
