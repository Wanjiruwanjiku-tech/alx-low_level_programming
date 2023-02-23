#include "main.h"

/**
*more_numbers - A function that prints ten times
*the numbers from 0 to 14
*
*Return: 0-14 x10 followed by \n
*/
void more_numbers(void)
{
	int x, y;

	for (x = 0; x < 10; x++)
	{
		for (y = 0; y <= 14; y++)
		{
			if (y < 9)
			{
				_putchar((y / 10) + '0');
			}

			_putchar((y % 10) + '0');
		}

		_putchar('\n');
	}
}
