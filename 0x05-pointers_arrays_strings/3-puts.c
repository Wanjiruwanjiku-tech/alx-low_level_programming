#include "main.h"

/**
*_puts - A function that takes a pointer to a string
*and prints it to stdout followed by a new line
*@str: string to print
*Return: void
*/
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++
	}
	_putchar('\n');
}
