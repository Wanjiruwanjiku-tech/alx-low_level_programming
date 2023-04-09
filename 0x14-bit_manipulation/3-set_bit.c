#include "main.h"

/**
*set_bit - A function that sets the value of
*a bit to 1 at a given index.
*
*@n: Points to the bit
*@index: position of biy
*Return: 1 if it worked, or -1 if an error occurre
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	*n |= (1ul << index);

	return (1);
}
