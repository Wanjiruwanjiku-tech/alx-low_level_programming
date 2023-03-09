#include "main.h"

/**
*_strlen_recursion - A function that returns the length
*of a given string
*@s: A pointer to the string
*
*Return: length of string
*/
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{

		return (1 + _strlen_recursion(s + 1));
	}
}
