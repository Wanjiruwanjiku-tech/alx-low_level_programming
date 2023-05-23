#include "main.h"

/**
*_atoi - converts a string to an int
*
*@s: pointer to str
*Return: converted str
*/
int _atoi(char *s)
{
	int result = 0;
	int sign = 1;
	int i = 0;

	while (s[i] == ' ' || s[i] == '\t')
	{
		i++;
	}
	if (s[i] == '-' || s[i] == '+')
	{
		sign = (s[i++] == '-') ? -1 : 1;
	}
	while (s[i] >= '0' && s[i] <= '9')
	{
		result = (result * 10) + (s[i++] - '0');
	}
	return (sign * result);
}
