#include "main.h"

/**
*_strdup - A Function that returns a pointer to
*newly allocated memory containing a copy of the string
*@str: A pointer to the string to duplicate
*
*Return: NULL if str is null and a pointer if
*successful
*/
char *_strdup(char *str)
{
	char *dup_str = malloc(strlen(str) + 1);

	if (str == NULL)
	{
		return (NULL);
	}

	if (dup_str == NULL)
	{
		return (NULL);
	}
	strcpy(dup_str, str);
	return (dup_str);
}
