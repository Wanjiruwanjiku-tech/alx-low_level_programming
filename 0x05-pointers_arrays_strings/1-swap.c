#include <main.h>

/**
*swap_int - A function that takes two int pointers as
*parameters and swaps their values
*@a: First int pointer
*@b: Second int pointer
*Return: void
*/
void swap_int(int *a, int *b)
{
	int temp = *a;

	*a = *b;
	*b = temp;
}
