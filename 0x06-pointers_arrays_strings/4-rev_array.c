#include "main.h"
#include <stdio.h>

/**
*reverse_array - A function that reverses the contents
*of an array(group) of integers
*@a: The Array of integers
*@n: The number of elements
*Return: void
*/
void reverse_array(int *a, int n)
{
	int i, temp; /*declared two var*/

	for (i = 0; i < n / 2; i++)
	{/*the loop iterates over the first half of then number or elements*/
		temp = a[i];/*save value of a[i]to temp*/
		a[i] = a[n - 1 - i];/*move value from end to begining*/
		a[n - 1 - i] = temp;/*begining to end*/
	}
}
