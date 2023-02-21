#include<stdio.h>

/**
* main - Prints all possible combinstion of 2-two
* digit numbers
*
* Return: Always 0
*/
int main(void)
{
	int x, y;
	int m, n, p, q;

	for (x = 0; x < 100; x++)
	{
		m = x / 10;
		n = x % 10;

		for (y = 0; y < 100; y++)
		{
			p = y / 10;
			q = y % 10;

			if (m < p || (m == p && n < q))
			{
				putchar(m + '0');
				putchar(n + '0');
				putchar(32);
				putchar(p + '0');
				putchar(q + '0');

				if (!(m == 9 && n == 8))
				{
					putchar(44);
					putchar(32);
				}
			}
		}
	}
	putchar(10);

	return (0);
}
