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
	while (*s1 != '\0' && *s2 != '\0')
	{
		if (*s1 != *s2)
		{
			return ((*s1 < *s2) ? -1 : 1);
		}
		s1++;
		s2++;
	}
	return ((*s1 == '\0' && *s2 == '\0') ? 0 : (*s1 == '\0') ? -1 : 1);
}
