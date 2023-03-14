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
	char *arr;
	unsigned int i;

	arr = malloc(sizeof(char) * (size + 1));

	if (arr == NULL || size == 0)
	{
		return (NULL);
	}
	for (i = 0; i < size - 1; i++)
	{
		arr[i] = c;
	}
	arr[size - 1] = '\0';

	return (arr);
}
