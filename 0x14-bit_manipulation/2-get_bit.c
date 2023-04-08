#include "main.h"

/**
*get_bit - A function that returns the value of
*a bit at a given index.
*
*@n: The number
*@index: Index, starting from 0
*Return: Value at index,
*	 -1 if error
*/
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
	{
		return (-1);
	}
	return ((n >> index) & 1);
}
