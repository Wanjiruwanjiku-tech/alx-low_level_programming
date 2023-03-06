#include "main.h"

/**
*_strchr - A function that locates a character in a
*string
*@s: A pointer to source string
*@c: The character(s) to find
*
*Return: A pointer to s if found and NULL If not found
*/
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (c == '\0')
	{
		return (s);
	}

	return (NULL);
}
