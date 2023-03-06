#include "main.h"

/**
*print_diagsums - A function that prints the sum of 2
*diagonals of a square matrix if integers
*@a: Matrix of integers
*@size: Size of matrix
*Return: Void
*/
void print_diagsums(int *a, int size)
{
	int i;
	int sum1 = 0;
	int sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += *(a + i * size + i);
		sum2 = *(a + i * size + (size - 1 - i));
	}
	printf("%d, %d\n", sum1, sum2);
}
