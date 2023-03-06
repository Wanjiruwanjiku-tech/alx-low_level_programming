#include "main.h"

/**
*_strpbrk - A function that searches a string for
*any of a set of bytes.
*@s: A pointer to string one
*@accept: A pointer to string two
*
*Return: A pointer to the broken off substring
*/
char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		char *a = accept;

		while (*a != '\0')
		{
			if (*a == *s)
			{
				return (s);
			}
			a++;
		}
		s++;
	}
	return (NULL);
}
