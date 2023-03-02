#include "main.h"
#include <stdio.h>

/**
*string_toupper - A function that changez lowercase
*letters of a string to uppercase
*@str: The pointer var to string value
*Return: A char type value
*/
char *string_toupper(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 'a' + 'A';
		} /*ASCII Conversion*/
		i++;
	}
	return (str);
}
