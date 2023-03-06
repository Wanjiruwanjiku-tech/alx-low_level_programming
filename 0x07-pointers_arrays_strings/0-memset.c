#include "main.h"

/**
*_memset - A function that fills a block of memory
*the constant byte b
*@s: A pointer to memory
*@b: The byte to set
*@n: The num of bytes to be set ti b
*Return: A pointer to memory
*/
char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;

	while (n > 0)
	{
		*p = b;
		p++;
		n--;
	} /*n-- shows one byte has been filled*/

	return (s);
}
