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
	int sum_them_all(const unsigned int n, ...)
{
	va_list nums;
	unsigned int index, sum = 0;

	va_start(nums, n);

	for (index = 0; index < n; index++)
		sum += va_arg(nums, int);

	va_end(nums);

	return (sum);
}
