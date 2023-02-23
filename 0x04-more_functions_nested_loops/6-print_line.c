#include "main.h"

/**
*print_line - A function that prints a straight line
*on the terminal
*@n: number of times the character '_' should print
*
*Description: if n is 0 or less the function should
*only print '\n'
*Return: straight lin
*/
void print_line(int n)
{
	int x;

	if (n < 0)
	{
		_putchar('\n');
	}
	else
	{
		for (x = 0; x < n; x++)
		{
			_putchar(95);
		}

		_putchar('\n');
	}
}
