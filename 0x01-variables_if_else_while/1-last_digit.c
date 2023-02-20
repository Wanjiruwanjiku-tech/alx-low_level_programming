#include<stdlib.h>
#include<stdio.h>
#include<time.h>

/**
 * main- prints a random number and states whether or
 * not positive, negative or Zero
 *
 * Return: Always zero
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
		printf("%d is positive\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	else
		printf("%d is zero\n", n);

	return (0);
}
