#include "main.h"

/**
*palindrome_checker - Checks the string reads the
*same backwards as forward
*@str: The string to be read
*@len: Length of string
*@i: Loop Counter
*Return: 1 if true and 0 if false
*/
int palindrome_checker(char *str, int len, int i)
{
	if (i < len && str[i] == str[len])
	{
		return (palindrome_checker(str, len - 1, i + 1));
	}
	else if (str[i] != str[len])
	{
		return (0);
	}
	return (1);
}
/**
*_strlen_recursion - A function that returns the length
*of a string
*@s: A pointer to the string
*Return: An integer that shows the length of string
*/
int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
	return (0);
}
/**
*is_palindrome - A function that checks if a given
*string reads the same backwards as forward
*@s: The string to check
*
*Return: 1 if true 0 if false
*/
int is_palindrome(char *s)
{
	int i = 0;
	int length = _strlen_recursion(s) - 1;

	return (palindrome_checker(s, length, i));
}
