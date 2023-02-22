#include "main.h"

/**
* print_alphabet_x10 - A function that prints lowercase
* alphabets 10 times
*
*Return: void
*
*/
void print_alphabet_x10(void)
{
	char letter;
	int i = 0;

	while (i <= 9)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
		{
			putchar(letter);
			putchar('\n');
			i++
		}
	}
	return ();
}
