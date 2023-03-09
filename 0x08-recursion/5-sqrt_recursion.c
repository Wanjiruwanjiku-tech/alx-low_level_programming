#include "main.h"

/**
*helper_sqrt - A function that finds the sqrt of 2 num
*@a: The num
*@b: The num to test sqrt of a
*Return: sqrt of number
*/
int helper_sqrt(int a, int b)
{
	if (b * b > a)
	{
		return (-1);
	}
	else if (b * b == a)
	{
		return (b);
	}
	else
	{
		return (helper_sqrt(a, b + 1));
	}
	return (1);
}
/**
*_sqrt_recursion - A funcion that returns the natural
*square root of a given number
*
*@n: The number to return sqrt of
*Return: Sqrt of n
*/
int _sqrt_recursion(int n)
{
	if (n == 0)
	{
		return (0);
	}
	return (helper_sqrt(n, 1));
}
