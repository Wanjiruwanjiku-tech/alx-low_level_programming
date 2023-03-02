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
	int a = 0, i;
	int cspc = 13;
	char spc[] = {32, '\t', '\n', 44, ';', 46, '!', '?', '"', '(', ')', '{', '}'};

	while (s[a])
	{
		i = 0;

		while (i < cspc)
		{
			if ((a == 0 || s[a - 1] == spc[i]) && (s[a] >= 97 && s[a] <= 122))
			s[a] -= 32;

			i++;
		}

		a++;
	}

	return (s);
}
