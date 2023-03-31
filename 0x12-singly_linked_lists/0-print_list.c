#include "lists.h"

/**
*print_list - A Function that prints all elements
*of a list_t list
*@h: A pointer to the list
*
*Description: If str is NULL, print [0] (nil)
*		You are allowed to use printf
*Return: The number of nodes
*/
size_t print_list(const list_t *h)
{
	size_t count = 0;/*increments and returns the total of nodes*/

	while (h)
	{
		/*loop through the list till we reach null*/
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		count++;
		h = h->next;
	}
	return (count);
}
