#include "main.h"

/**
*_strlen - A function that returns the length of a
*string
*@s: String to count
*
*Return: void
*/
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++
	}
	return (len);
}
