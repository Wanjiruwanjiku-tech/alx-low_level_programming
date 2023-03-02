#include "main.h"

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
	int capt = 1;

	while (str[i] != '\0')
	{
		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
		str[i] == ',' || str[i] == ';' || str[i] == '.' ||
		str[i] == '!' || str[i] == '?' || str[i] == '"' ||
		str[i] == '(' || str[i] == ')' || str[i] == '{' ||
		str[i] == '}')
		{
			capt = 1;
		}
		else if (capt)
		{
			if (str[i] >= 'a' && str[i] <= 'z')
			{
				str[i] = str[i] - 'a' + 'A';
			}
			capt = 0;
		}
		i++;
	}

	return (str);
}
