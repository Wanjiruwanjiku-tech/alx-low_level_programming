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
	int num_coins = 0;
	int cents;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	} /* To check if not more than one argument has been passed*/

	cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}
	num_coins += cents / 25; /*quarters*/
	cents %= 25;

	num_coins += cents / 10; /*dimes*/
	cents %= 10;

	num_coins += cents / 5; /*nickles*/
	cents %= 5;

	num_coins += cents / 2; /*twos*/
	cents %= 2;

	num_coins += cents; /*ones*/

	printf("%d\n", num_coins);

	return (0);
}
