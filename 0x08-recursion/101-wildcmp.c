#include "main.h"

/**
*wildcmp - A function that compares two strings
*@s1: A pointer to the first string
*@s2: A pointer to the second string
*Return: An integer value after comparison
*/
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
	{
		return (1); /*if both are empty they are identical*/
	}
	else if (*s1 == *s2 || *s2 == '*') /*if characters match*/
	{
		return (wildcmp(s1 + 1, s2 + 1) || wildcmp(s1, s2 + 1));
	} /*check the next character in each string*/
	return (0); /*if characters dont match*/
}
