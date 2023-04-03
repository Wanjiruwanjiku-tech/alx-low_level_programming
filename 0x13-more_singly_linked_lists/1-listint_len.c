#include "lists.h"

/**
*listint_len - A function that returns the number of
*elements in a linked list
*
*@h: A pointer to the singly linked list
*
*Return: The number of elements
*
*/
size_t listint_len(const listint_t *h)
{
	size_t count = 0; /*To return number if elements*/

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
