#include <stdlib.h>
#include <stdio.h>

/**
*main - The main Entry Point
*@argc: The number of passed arguements
*@argv: Pointer to arguement string
*
*Description: adds positive numbers
*Return: 1 if error and 0 if success
*/
int main(int argc, char *argv[])
{
	int i = 0; /*counter*/
	int num1 = atoi(argv[1]);
	int num2 = atoi(argv[2]);
	int sum = num1 + num2;

	if (argc < 3)
	{
		printf("0\n");
	}
	else if (num1 <= 0 && num2 <= 0)
	{
		printf(Error);
		return (1);
	}
	else
	{
		printf("%d\n", sum);
	}
	return (0);
}
