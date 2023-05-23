#include "main.h"

/**
*_memset - Sets the first n bytes to a constant value
*
*@b: Constant value
*@n: Bytes
*@s: Pointer to str
*Return: char type
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;

	for (; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}

/**
*_memcpy - copies n bytes from one str to another
*
*@dest: Destination
*@src: Source
*@n: Bytes
*Return: dest
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
