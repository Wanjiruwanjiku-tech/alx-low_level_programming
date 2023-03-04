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
	int i, j;
	char leetlet[] = "AaEeOoTtLl";
	char leetnum[] = "4433007711";
	int n;

	n = strlen(leetlet);

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (str[i] == leetlet[j])
			{
				str[i] = leetnum[j];
				break;
			}
		}
	}

	return (str);
}
