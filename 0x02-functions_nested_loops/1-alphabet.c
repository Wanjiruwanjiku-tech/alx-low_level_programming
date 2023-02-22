#include "main.h"
/**
* print _alphabet - Prints the alphabet in lowercase
* using the prototype void print _alphabet(void)
*
* Return: (void)
*/
void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		putchar(letter);

		putchar('\n');
	}

	return (0);
}
