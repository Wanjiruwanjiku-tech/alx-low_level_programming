#include "main.h"
#include <stdio.h>

/**
*_strncpy - A Function that copys a string
*@dest: A pointer to dest string
*@src: A pointer to src string
*@n: number
*Return: A char type value
*/
char *_strncpy(char *dest, char *src, int n)
{
	char *result = dest;
	int i;

	for (i = 0; i < n && *src != '\0'; i++)
	{
		*dest = *src;
		dest++;
		src++;
	}

	for (; i < n; i++)
	{
		*dest = '\0';
	}

	return (result);
}
