#include "main.h"

/**
*create_array - A Function that creates an array of chars
*and initializes it with a specific char
*@size: An unsinged int type showing the size of char
*@c: The string
*
*Return: NULL if size = 0 or a pointer to array
*if successful and null if it fails
*/
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int index;

	if (size == 0)
		return (NULL);

	array = malloc(sizeof(char) * size);

	if (array == NULL)
		return (NULL);

	for (index = 0; index < size; index++)
		array[index] = c;

	return (array);
}
