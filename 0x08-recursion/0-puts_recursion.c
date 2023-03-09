#include "main.h"

/**
*_puts_recursion - A function that prints a string
*followed by a new line
*@s: A pointer to the string to print
*
*Return: void
*/
void _puts_recursion(char *s)
{
	if (*s == '\0') /* base case */
	{
		_putchar ('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
