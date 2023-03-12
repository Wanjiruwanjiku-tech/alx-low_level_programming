#include <stdio.h>
#include <stdlib.h>

/**
*main - The main Entry point
*@argc: The number of passed arguements
*@argv: Pointer to the argument string
*
*Description: Print the min number of coins to make
*change for an amount of money
*Return: Always 0 (success)
*/
int main(int argc, char *argv[])
{
	int cents = atoi(argv[1]);
	int a, b, c, d, e;
	int total = a + b + c + d + e;

	a = cents / 25;
	cents %= 25;
	b = cents / 10;
	cents %= 10;
	c = cents / 5;
	cents %= 5;
	d = cents / 2;
	cents %= 2;
	e = cents;
	if (argc != 2) /* if one argument is passed*/
	{
		printf("Error\n");
		return (1);
	}
	if (cents < 0) /* if negative */
	{
		printf("0\n");
		return (0);
	}
	else
	{
		printf("%d\n", total);
	}
	return (0);
}
