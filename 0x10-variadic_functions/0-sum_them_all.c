#include "variadic_functions.h"
#include <stdarg.h>

/**
*sum_them_all - A Function that sums up all its
*parameters
*@n: The fixed psrsmeter
*@...: The variable number of parameters to sum up
*
*Return: The sum of all parameters
*/
int sum_them_all(const unsigned int n, ...)
{
	va_list ap; /*variable list variable*/
	unsigned int i; /*loop counter*/
	unsigned int sum = 0; /*the sum of all parameters*/

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(ap, int);
	}

	va_end(ap);
	return (sum);
}
