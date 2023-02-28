#include "main.h"

/**
*puts_half - A function that prints half a string
*followed by a new line
*@str: The string pointer
*
*Return: void
*/
void puts_half(char *str)
{
	int length = 0;
	int start;
	int i = start;

	while (str[length] != '\0')
	{
		length++;
	}

	if (length % 2 == 0)
	{
		start = length / 2;
	}
	else
	{
		start = (length - 1) / 2;
	}

	for (; i < length; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
