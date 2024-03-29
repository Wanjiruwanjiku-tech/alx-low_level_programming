#include "main.h"

/**
*clear_bit - A function that sets the value of
*a bit to 0 at a given index.
*
*@n: Points to the bit
*@index: Position if the bit
*
*Return: 1 if it worked, or -1 if an error occurred
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	*n &= ~(1ul << index);

	return (1);
}
