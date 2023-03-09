#include "main.h"

/**
*_pow_recursion - A function that raises the value of
*x to the power of y
*@x: Base number
*@y: Exponent
*
*Return: value of x
*/
int _pow_recursion(int x, int y)
{
	if (y < 0) /* if negative*/
	{
		return (-1);
	}
	else if (y == 0) /*if 0 always return 1*/
	{
		return (1);
	}
	else
	{

		return (x * (_pow_recursion(x, y - 1)));
	}
}
