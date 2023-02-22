#include "main.h"

/**
*_isalpha - checks for alphabetic characters
*@c and C: to be checked
*
*Return: 1 if c is lower or upper case and 0
*if anything less
*/
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}

	return (0);
}
