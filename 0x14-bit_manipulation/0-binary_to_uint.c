#include "main.h"

/**
*binary_to_uint - A function that converts a binary
*number to an unsigned integer
*
*@b: Points to the string containing the binary num
*Return: (a) Converted number
*	 (b) 0 if other chars other than 0 and 1
*	 (c) 0 if b is NULL
*
*/
unsigned int binary_to_uint(const char *b)
{
	int i = 0;
	unsigned int n = 0;
	int power = 0;

	/*Check if b is null*/
	if (b == NULL)
	{
		return (0);
	}
	while (b[i + 1])
	{
		i++;
	}
	while (i >= 0)
	{
		if (b[i] == '0')
		{
			i--;
			power++;
		}
		else if (b[i] == '1')
		{
			n = n + (1 << power);
		}
		else
			return (0);
	}
	return (n);
}
