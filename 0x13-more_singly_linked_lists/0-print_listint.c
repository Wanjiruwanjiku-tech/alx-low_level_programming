#include "lists.h"

/**
*print_listint - A Functiin that ptints all elements
*of a linked list.
*
*@h: A pointer to the linked lust
*
*Return: The number of nodes
*/
size_t print_listint(const listint_t *h)
{
	size_t count = 0; /*To Return total num of nodes*/

	while (h != NULL)
	{
		printf("The number if Nodes is : %d\n", h->n);
		h = h->next;
		count++;
	}

	return (count);
}
