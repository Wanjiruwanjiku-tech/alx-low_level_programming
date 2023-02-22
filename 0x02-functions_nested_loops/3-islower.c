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
	if (c >= 9 && c <= 122)
	{
		return (1);
	}

	return (0);
}
