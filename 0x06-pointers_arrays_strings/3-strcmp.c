#include "main.h"
#include <stdio.h>

/**
*_strcmp - A Function that compares two strings
*
*@s1: String one
*@s2: String two
*
*Return: Always 0
*/
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] == s2[i] && s1[i] != '\0')
	{
		i++;
	}

	return (s1[i] - s2[i]);
}
