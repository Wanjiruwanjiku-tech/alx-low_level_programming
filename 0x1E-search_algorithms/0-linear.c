#include "search_algos.h"
#include <stddef.h>

/**
 * linear_search - The function searches for a value in an array on
 * integers using the linear search algorithm
 * @array: Pointer to the first ellement of the array
 * @size: the number of elements in the array
 * @value: the value to search for
 *
 * Return: The first index where value is located.
 * if array = null return -1
 * if value is absent return -1
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	/*Check if array is null*/

	if (array == NULL)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		if (array[i] == value)
		{
			return (i);
		}
	}
	/*If value is not found*/
	return (-1);
}
