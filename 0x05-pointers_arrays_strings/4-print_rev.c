#include "main.h"

/**
*print_rev - A function that takes a pointer to a
*string and prints it in reverse followed by a new
*line
*@s: The string
*Return: void
*/
void print_rev(char *s)
{
	int len;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	for (int = len - 1; i >= 0; i--)
	{
		_putchar(*(s + i));
	}
	_putchar('\n');
}
