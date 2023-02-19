#include<stdio.h>

/**
 * main - Prints single digit base 10 numbers from o
 * using the function putchar
 *
 * Return: Always
 */
int main(void)
{
	int num;

	for (num = '0'; num <= '10'; num++)
		putchar(num);

	putchar('\n');

	return (0);
}
