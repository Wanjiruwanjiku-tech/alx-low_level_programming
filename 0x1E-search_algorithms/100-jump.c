#include "search_algos.h"

/**
 * linear_search_block - Helper function to search for a value within the block
 * @array: pointer to the first element in the array
 * @start: the starting index of the block
 * @end: the ending index of the block
 * @value: the value to search
 *
 * Return: the value searched for
 */
int linear_search_block(int *array, int start, int end, int value)
{
	int i;

	for (i = start; i <= end; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}

/**
 * jump_search - The function uses the Jump search algorithim to search
 * for a value in a sorted array of ints
 * @array: Pointer the the first element of the array
 * @size: The number if elements in array
 * @value: The target
 * Return: if array and value are null and absent return -1
 */
int jump_search(int *array, size_t size, int value)
{
	int jump, step, result;

	if (array == NULL || size == 0)
	{
		return (-1);
	}
	/* Calculate the jump size */
	jump  = sqrt(size);
	step = 0;

	while (step < (int)size && array[step] < value)
	{
		printf("Value checked array[%d] = [%d]\n", step, array[step]);
		step += jump;
	}
	printf("Value found between indexes [%d] and [%d]\n", step - jump, step);

	result = linear_search_block(array, step - jump, fmin(step, (int)size - 1), value);
		return (result);

}
