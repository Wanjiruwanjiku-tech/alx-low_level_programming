#include "main.h"

/**
*_puts - Prints a string to stdout
*@s: Pointer to string
*/
void _puts(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i++;
	}
	_putchar('\n');
}

/**
*_strcmp - Compares two strings
*
*@s1: string one
*@s2: string tw
*Return: compared str
*/
int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s2 != '\0')
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
	}
	if (*s1 == '\0' && *s2 == '\0')
	{
		return (0);
	}
	else if (*s1 == '\0')
	{
		return (-1);
	}
	else
	{
		return (1);
	}
}
