#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
*print_numbers - A Function that prints numbers followed by a
*new line
*@separator: Pointer to string to be printed
*between numbers
*@n: The number of integers passed
*@...: The variable number of arguements
*
*Retuurn: Type void
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list nums;
	unsigned int index;

	va_start(nums, n);

	for (index = 0; index < n; index++)
	{
		printf("%d", va_arg(nums, int));

		if (index != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(nums);
}
