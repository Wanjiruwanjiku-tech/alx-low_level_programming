#include<stdio.h>

/**
 * main - Prints single digit numbers if base 10 starting
 * from 0
 *
 * Return: Always 0
 */
int main(void)
{
	int num;

	for (num = '0'; num < '10'; num++)
		printf("%d", num);

	printf("\n");

	return (0);
}
