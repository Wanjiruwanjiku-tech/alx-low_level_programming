#include <stdio.h>
#include <stdlib.h>

/**
*main -The main Entry point
*@argc: The number of passed arguments
*@argv: Pointer to argument string
*
*Description: Print all arguements including index 0
*Return: success (0)
*/
int main(int argc, char *argv[])
{
	int i; /* Loop Counter */

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
