#include <stdio.h>
#include <stdlib.h>

/**
*main - The main entry point
*@argc: The number of arguments passed
*@argv: Pointer to string of arguments
*
*Description: Print number of arguments passed
*Return: 0 success
*/
int main(int argc, char *argv[])
{
	(void)argv;

	printf("%d\n", argc - 1); /*exclude index 0*/

	return (0);
}
