#include "main.h"
#include <stdio.h>

/**
*_strcat - A Function that Concatenates two strings
*Description: Appends the src string to dest string
*@src: Pointer variable to source string
*@dest: Pointer variable to destination string
*
*Return: A char type variable
*/
char *_strcat(char *dest, char *src)
{
	char *result = dest /*initialize result to same value as dest */

	while (*dest != '\0')
	{
		dest++; /*increment dest untill null*/
	}

	while (src != '\0')
	{
		*dest = *src;
		dest++;
		src++; /* derefrence both var*/
	}
	*dest = '\0'; /*add null terminator at end of concatanated string*/

	return (result);
}
