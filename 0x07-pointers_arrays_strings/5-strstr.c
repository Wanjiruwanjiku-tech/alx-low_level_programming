#include "main.h"

/**
*_strstr - A function that looks for a substring in
*a string
*@needle: A pointer to a substring
*@haystack: A pointer to the string being searched for
*the substring
*Return: A pointer to beginning of the located
*substring or NULL If not found
*/
char *_strstr(char *haystack, char *needle)
{
	if (*needle == '\0')
	{
		return (haystack);
	}
	while (*haystack != '\0')
	{
		char *h = haystack;
		char *n = needle;

		while (*h != '\0' && *n != '\0' && *h == *n)
		{
			h++;
			n++;
		}
		if (*n == '\0')
		{
			return (haystack);
		}
		haystack++;
	}
	return (NULL);
}
