#include "main.h"

/**
* _abs - Calculates the absolute value of an integer
*
*@n: The integer
*Return: abs value
*/
int _abs(int n)
{
	int num = n;

	if (num < 0)
		return (-num);
	else
		return (num);
}

/**
*_isdigit - Checks if c is an integer
*
*@c: The character to check
*Return: c
*/
int _isdigit(int c)
{
	return (c >= 48 && c <= 57);
}
