#include "main.h"
#include<stdio.h>

/**
*_isdigit - A function that checks code for a digit
* 0 through 9
*@c: the digit
*Return: 1 if c is a digit and 0 if other
*/
int _isdigit(int c)
{
	if ((c >= 0) && (c <= 9))
		return (1);
	else
		return (0);

}
