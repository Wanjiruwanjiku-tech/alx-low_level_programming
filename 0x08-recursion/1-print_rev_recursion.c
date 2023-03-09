#include "main.h"

/**
*_print_rev_recursion - A function that prints a string
*in reverse to stdout
*@s: A pointer to the string to print
*Return: void
*/
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
