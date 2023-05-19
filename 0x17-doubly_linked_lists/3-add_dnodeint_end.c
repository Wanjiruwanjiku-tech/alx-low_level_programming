#include "lists.h"

/**
*add_dnodeint_end - A function that adds a
*new node at the end of a dlistint_t list.
*
*@head: A double poinyer to the head
*@n: New value to add
*Return: the address of the new element,
*	 or NULL if it failed
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *h;
	dlistint_t *new_node;
	/* Create new node */
		/* And */
	/*check if successfull*/
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;/*Set the data*/
	new_node->next = NULL;
	h = *head;

	if (h != NULL)
	{
		while (h->next != NULL)
			h = h->next;
		h->next = new_node;
	}
	else
	{
		*head = new_node;
	}
	new_node->prev = h;
	return (new_node);
}
