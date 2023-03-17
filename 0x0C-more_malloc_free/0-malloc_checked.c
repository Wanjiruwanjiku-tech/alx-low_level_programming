#include "main.h"
#include <stdlib.h>

/**
*malloc_checked - A Function that dynamically allocates
*memory using malloc function
*@b: The size to assign
*
*Return: A Pointer to allocated memory or a status
*value of 98 if failure
*
*/
void *malloc_checked(unsigned int b)
{
	void *pointer = malloc(b);

	if (pointer == NULL)
	{
		exit(98);
	}
	return (pointer);
}
