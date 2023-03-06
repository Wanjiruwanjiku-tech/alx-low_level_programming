#include "main.h"

/**
*_strspn - A functiin that finds the length of a
*prefix substring
*@s: A pointer to a string to be checked
*@accept: A pointer to a string that has a set of
*characters to be allowed in the initial seg
*Return: A pointer to the length
*/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j; /*counters for s and accept*/
	unsigned int len = 0; /*length we want to find*/

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				len++;
				break;
			}
		}
		if (accept[j] == '\0')
		{
			break;
		}
	}
	return (len);
}
