#include "main.h"
#include <stdio.h>

/**
*print_number - A function that prints integers
*Description: Only use _putchar
*@n: The integer
*Return: void
*/
void print_number(int n)
{
	int i = 1;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
		/*check if integer is negative if so print '-'*/
	}

	while (n / i > 9)
	{
		i *= 10;
	} /** Find the largest power of 10*/

	while (i > 0)
	{
		_putchar((n / i) % 10 + '0');
		i /= 10;
	} /*print each digit of the integer*/
}
