#include<stdio.h>
#include<time.h>
#include<stdlib.h>

/**
 * main - Entry point
 * Description - Random number to a variable
 * Return: 0 (success)
 */
int main(void)
{
	int n;

	standard(time(0));
	n = rand() - RAND_MAX / 2;

	if (n>0)
		printf("%i is positive\n", n);
	else if (n<0)
		printf("%i is negative\n", n);
	else
		printf("%i is zero\n", n);

	return (0);
}
