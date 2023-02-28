#include <stdio.h>
#include "main.h"

/**
*print_array - A function that prints n elements of an
*array if integers
*@a: Array
*@n: Integers
*Return: void
*/
void print_array(int *a, int n)
{
	int i = 0;

	for (; i < n; i++)
	{
		printf("%d", a[i]);

		if (i != (n - 1))
		{
			printf(", ");
		}
	}
	printf("\n");
}
