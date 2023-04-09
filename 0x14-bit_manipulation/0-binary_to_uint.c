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
	unsigned int result = 0;

	/*Check if b is null*/
	if (b == NULL)
	{
		return (0);
	}
	while (*b != '\0')
	{
		if (*b != '0' && *b != '1')
		{
			return (0);
		}
		result = (result << 1) | (*b - '0');
		b++;
	}
	return (result);
}
