#include "main.h"

/**
*primeNum_finder - A function that determines the prime
*number
*@a: The number to check
*@b: The number we'll go through
*Return: whether number if prime or not
*/
int primeNum_finder(int a, int b)
{
	if (a <= 1 || a % b == 0)
	{
		return (0);
	}
	else if (a == b)
	{
		return (1);
	}
	else if (a > b)
	{
		primeNum_finder(a, b + 1);
	}
	return (1);
}
/**
*is_prime_number - A function that determines if an
*integer is a prime numbee or not
*@n: The number to check
*Return: 0 if not prime and 1 if prime
*/
int is_prime_number(int n)
{
	return (primeNum_finder(n, 2));
}
