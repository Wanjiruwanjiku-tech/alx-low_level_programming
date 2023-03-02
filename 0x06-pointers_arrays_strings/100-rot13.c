#include "main.h"
#include <stdio.h>

/**
*rot13 - A function that encodes a string using ROT13
*@str: Pointer to string
*
*Return: A pointer to the encoded string
*/
char *rot13(char *str)
{
	char *ptr = str;

	while (*ptr)
	{
		if ((*str >= 'a' && *str <= 'm') || (*str >= 'A' && *str <= 'M'))
		{
			*str += 13;
		}
		else if ((*str >= 'n' && *str <= 'z') || (*str >= 'N' && *str <= 'Z'))
		{
			*str -= 13;
		}
		
		str++;
	}

	return (ptr);
}
