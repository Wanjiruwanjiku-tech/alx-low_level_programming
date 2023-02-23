#include "main.h"

/**
*_islower - A function that checks for the lowercase
*letter c
*@c: the character to be checked
*
*Return: 1 for lowercase letter and 0 for other
*/
int _islower(int c)
{
	if (c > 96 && c < 123)
		return (1);
	else
		return (0);
}
