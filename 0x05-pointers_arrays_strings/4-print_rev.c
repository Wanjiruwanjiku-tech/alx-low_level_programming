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
	int c = 0;

	while (s[c] != '\0')
	{
		c++;
	}

	for (c -= 1; c >= 0; c--)
	{
		_putchar(s[c]);
	}

	_putchar('\n');
}
