#include "main.h"
#include <stdio.h>

/**
*cap_string - A function that capitalizes all words of
*a string
*Description: Converts the first letter of each word
*@str: Pointer to string
*Return: A char type value
*/
char *cap_string(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (i == 0 || is_word_separator(str[i - 1]))
		{
			if (str[i] >= 'a' && str[i] <= 'z')
			{
				str[i] = str[i] - 'a' + 'A';
			}
		}

		i++;
	}
	return (str);
}
