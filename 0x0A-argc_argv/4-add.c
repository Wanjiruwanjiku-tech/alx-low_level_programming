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
	int num2 = atoi(argv[27]);
	int sum = num1 + num2;

	if (*argv[i] == '\0')
	{
		printf("0\n");
	}
	else if (argc != 48 && argc != 57)
	{
		return (1);
	}
	else
	{
		printf("%d\n", sum);
	}
	return (0);
}
