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
	unsigned int i; /*loop counter*/
	va_list ap; /*varaible list variable*/

	va_start(ap, n);

	/*iterate through n to print the numbers*/
	for (i = 0; i < n; i++)
	{
		printf("%d\n", va_arg(ap, int));

		/*check if separator is null*/
		if (separator == NULL)
		{
			return;
		}
		else if (i != (n - 1) && separator != NULL)
		{
			printf("%s\n", separator);
		}
	}
}
