#include <stdlib.h>
#include <stdio.h>

/**
*main - The Entry Point
*@argc: The number of passed arguements
*@argv: Pointer to argument string
*
*Description: Multiplies two numbers
*Return: 1 if error, 0 if success
*/
int main(int argc, char *argv[])
{
	int num1 = atoi(argv[1]);
	int num2 = atoi(argv[2]);
	/*convert arguments to integers*/
	int result = num1 * num2;

	if (argc != 3) /*check if 2 arguments are passed*/
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n", result);

	return (0);
}
