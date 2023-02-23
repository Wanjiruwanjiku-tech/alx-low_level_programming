#include "main.h"
#include <stdio.h>

/**
*_isupper - A function that checks code for uppercase
*characters
*@c: inpur for uppercase characters
*Return: 1 if c is uppercas and 0 if other
*/
int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
		return (1);
	else
		return (0);
}
