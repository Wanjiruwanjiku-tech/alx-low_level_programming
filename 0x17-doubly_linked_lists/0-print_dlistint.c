#include "lists.h"

/**
*print_dlistint - A function that prints all the
*elements of a list
*@h: A pointer to head of list
*
*Return: Number of elements
*/
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
