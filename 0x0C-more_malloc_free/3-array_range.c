#include "main.h"

/**
*array_range - A Function that creates an array of integers
*
*@min: The First value of the array
*@max: The Last value of the array
*
*Return: A Pointer to the array else Null if min > max
*/
int *array_range(int min, int max)
{
	int *array, index, size;

	if (min > max) /*check if min is greater than max*/
	{
		return (NULL);
	}
	size = max - min + 1; /*calculate size of array*/

	array = malloc(sizeof(int) * size); /* allocate memory for the*/
	/*calculated size*/

	if (array == NULL)
		return (NULL);

	for (index = 0; index < size; index++)
		array[index] = min++;

	return (array);
}
