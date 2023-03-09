#include "main.h"

/**
*factorial - A function that finds the factorial of a
*given number
*@n: The given number
*
*Return: -1 in n<0
*/
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1); /* 0! = 1*/
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
