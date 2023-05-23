#include "main.h"

/**
*_strlen - Checks the length of a string
*
*@s: Pointer to the string
*Return: Length
*/
int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;
	return (len);
}

/**
*_strcpy - Copies a string
*
*@dest: Destination
*@src: source
*Return: copied string
*/
char *_strcpy(char *dest, char *src)
{
	char *copy = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (copy);
}

/**
*_strcat - Concatenates two strings
*
*@dest: Destination
*@src: Source
*Return: Concatenated string
*/
char *_strcat(char *dest, char *src)
{
	char *cat_str = dest;

	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	dest = '\0';
	return (cat_str);
}

/**
*_strncat - Concatenates two strings to point n
*
*@dest: dedtination
*@src: source
*@n: n bytez
*Return: dest str
*/
char *_strncat(char *dest, char *src, int n)
{
	char *cat_str = dest;
	int i = 0;

	while (*dest != '\0')
		dest++;
	while (*src != '\0' && i < n)
	{
		*dest = *src;
		dest++;
		src++;
		i++;
	}
	dest = '\0';
	return (cat_str);
}

/**
*_strncpy - Copies n bytes of a string
*
*@dest:destination
*@src: source
*@n: bytes
*Return: string
*/
char *_strncpy(char *dest, char *src, int n)
{
	char *copy = dest;
	int i = 0;

	while (*src != '\0' && i < n)
	{
		*dest = *src;
		dest++;
		src++;
		i++;
	}
	while (n > 0)
	{
		*dest = '\0';
		dest++;
		n--;
	}
	return (copy);
}
