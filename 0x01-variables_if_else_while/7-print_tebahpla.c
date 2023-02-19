#include<stdio.h>

/**
 * main - prints lowercase alphabets in reverse by using
 * the function putchar
 *
 * Return: Always 0
 */
int main(void)
{
	char letter;

	for (letter = 'z'; letter >= 'a'; letter--)
		putchar(letter);

	putchar('\n');

	return (0);
}
