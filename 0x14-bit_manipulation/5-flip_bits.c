#include "main.h"

/**
*flip_bits - A function that returns the number
*of bits you would need to flip to get from
*one number to another
*
*@n: The first number
*@m: The secind number
*
*Return: Number of bits flipped
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int count = 0;
	unsigned long int xor_result = n ^ m;

	while (xor_result != 0)
	{
		if (xor_result & 1)
		{
			count++;
		}
		xor_result >>= 1;
	}
	return (count);
}
