#include "main.h"

/**
*_strncat - A Function that concatanates two stings
*
*Description: It will use n bytes from src and src
*doesn't need to be null terminated
*@dest: Pointer var to dest string
*@src: Pointer to src string
*@n: number of bytes used
*Return: A char type value
*/
char *_strncat(char *dest, char *src, int n)
{
	char *result = dest;
	int i = 0;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0' && i < n)
	{
		*dest = *src;
		dest++;
		src++;
		i++; /*loop ends when null is reached or when i = n*/
	}
	*dest = '\0';

	return (result);
}
