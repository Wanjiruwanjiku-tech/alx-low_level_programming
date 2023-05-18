#include "lists.h"

/**
*dlistint_len - A function that returns the
*number of elements in a linked dlistint_t list.
*
*@h: A pointer to the head of list
*Return: Lenghth
*/
size_t dlistint_len(const dlistint_t *h)
{
	size_t length = 0;

	for (; h != NULL; h = h->next)
	{
		length++;
	}
	return (length);
}
