#include "main.h"
#include <string.h>
#include <unistd.h>
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
	char leetlet[] = "AaEeOoTtLl";
	char leetnum[] = "4433007711";
	int i;

	if (str == NULL)
	{
		return (NULL);
	}

	for (i = 0; str[i] != '\0'; i++)
	{
		char *pos = strchr(leetlet, str[i]);

		if (pos != NULL)
		{
			str[i] = leetnum[pos - leetlet];
		}
	}

	return (str);
}
