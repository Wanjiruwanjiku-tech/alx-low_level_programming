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
	int i, j;
	char leet_letters[] = {'4', '3', '0', '7', '1'};
	char normal_letters[] = {'a', 'e', 'o', 't', 'l'};

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (str[i] == normal_letters[j] || str[i] == normal_letters[j] - 'a' + 'A')
			{
				str[i] = leet_letters[j];
				break;
			}
		}
	}

	return (str);
}
