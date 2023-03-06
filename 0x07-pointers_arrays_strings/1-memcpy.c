#include "main.h"

/**
*_memcpy - A function that copies a block of memory
*area
*@dest: The pointer to destination.
*@src: A pointer to mem location where data is copied
*from
*@n: Num of bytes to be copied
*Return: Pointer
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *final_result = dest;

	while (n--)
	{
		*dest++ = *src++;
	}

	return (final_result);
}
