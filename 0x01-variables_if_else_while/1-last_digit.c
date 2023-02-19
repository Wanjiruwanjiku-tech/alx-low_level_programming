#include<stdlib.h>
#include<stdio.h>
#include<time.h>

/**
 * main - Prints the last digit of randomly generated
 * number and shows whether it is greater than 5 or
 * less than 6.
 *
 * Return: Always 0
 */
int main(void)
{
	int n;

	srand (time(0));
	n = rand() - RAND_MAX / 2;

	if ((n%10) > 5)
	{
		printf("Last digit of %d is %d and is greter than 5\n", n, n%10);
	}
	else if ((n%10) < 6)
	{
		printf("Last digit of %d is %d and is less than 6\n", n, n%10);
	}
	else
	{
		printf("Last digit of %d is %d and is 0\n", n, n%10);
	}

	return (0);
}
