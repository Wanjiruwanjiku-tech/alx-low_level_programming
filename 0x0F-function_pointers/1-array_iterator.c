#include "function_pointers.h"

/**
*array_iterator - A Function that executes of each element
*of an array
*@array: A Pointer to the first element of the array
*@size: The Siae of the Array
*@action: The Function Pointer
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++) /*The loop increments to each element*/
	{
		(*action)(array[i]); /*Call the function to execute on each element*/
	}
}
