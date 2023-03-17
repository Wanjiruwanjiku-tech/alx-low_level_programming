#include "main.h"

/**
*_calloc - A Function that allocates memory for
*an array of certain number of elements with size bytes
*
*@nmemb: The Number of elements
*@size: The byte size of each element
*
*Return: If nmemb = 0, size = 0 return null if malloc
*fails return null else return pointer
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *mem;
	char *filler;
	unsigned int index;

	if (nmemb == 0 && size == 0) /*check if either argument is zero*/
	{
		return (NULL); /*return null if true else continue*/
	}
	mem = malloc(size * nmemb); /*allocate memory of size * number of elements*/

	if (mem == NULL) /*Check if Memory Allocation worked*/
	{
		return (NULL);
	}
	filler = mem; /*cast the pointer mem which is void to a char pointer*/
	/*and assign it to filler which is the char pointer*/

	for (index = 0; index < (size * nmemb); index++)
	{
		filler[index] = '\0'; /*loop through the block of memory*/
		/*and set each byte to\0*/
	}
	return (mem);
}
