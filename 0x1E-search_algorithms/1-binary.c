#include "search_algos.h"

/**
 * binary_search - The function searches for a value in a sorted array
 * of integers using binary search.
 * @array: Pointer to the first element of the array
 * @size: The number ofelements in array
 * @value: The value to search for
 * Return: if value is not present in array or if array is null return -1
 */

int binary_search(int *array, size_t size, int value)
{
	size_t left, right, mid, i;

	if (array == NULL)
	{
		return (-1);
	}
	left = 0;
	right = size - 1;

	while (left <= right)
	{
		printf("Searching in array: ");
		for (i = left; i <= right; i++)
		{
			printf("%d", array[i]);
			if (i < right)
			{
				printf(", ");
			}
		}
		printf("\n");
		mid = left + (right - left) / 2;
		if (array[mid] == value)
		{
			return (mid);
		}
		if (array[mid] < value)
		{
			left = mid + 1;
		}
		else
		{
			right = mid - 1;
		}
	}
	return (-1);
}
