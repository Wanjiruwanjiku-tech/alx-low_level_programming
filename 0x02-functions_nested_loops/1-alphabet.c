#include "main.h"
/**
* print _alphabet - Prints the alphabet in lowercase
* using the prototype void print _alphabet(void)
*
* Return: (void)
*/
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);

		_putchar('\n');
	}

	return ();
}
