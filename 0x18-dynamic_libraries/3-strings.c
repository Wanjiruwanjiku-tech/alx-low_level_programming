#include "main.h"
#define NULL 0

/**
*_strchr - Searches for fist ocurrence of c in s
*@s: Pointer to str
*@c: Char to find
*Return: first occurence
*/
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (NULL);
}

/**
*_strspn - Finds len of s that only has chars from
*accept
*@s: pointer to string
*@accept: pointet to counter str
*Return: match len
*/
unsigned int _strspn(char *s, char *accept)
{
	int i, j, match;

	i = 0;
	match = 0;

	while (s[i] != '\0')
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				match++;
				break;
			}
			if (accept[j + 1] == '\0' && s[i] != accept[j])
			{
				return (match);
			}
		}
		i++;
	}
	return (match);
}

/**
*_strpbrk - return poiter in s that match byte in
*accept
*@s: str1
*@accept: str2
*Return: pointer
*/
char *_strpbrk(char *s, char *accept)
{
	int x, y;

	x = 0;
	y = 0;

	while (s[x] != '\0')
	{
		for (; accept[y] != '\0'; y++)
		{
			if (s[x] == accept[y])
			{
				s = &s[x];
				return (s);
			}
		}
		x++;
	}
	return (NULL);
}

/**
* _strstr - Searches for needle in haystack
*
*@haystack: Where to search
*@needle: what to search
*Return: pointer to substring
*/
char *_strstr(char *haystack, char *needle)
{
	char *h = haystack;
	char *n = needle;

	if (*needle == '\0')
		return (haystack);

	while (*haystack != '\0')
	{
		while (*n != '\0' && *h == *n)
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
