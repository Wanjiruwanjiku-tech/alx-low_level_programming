#include "lists.h"

/**
*delete_dnodeint_at_index - deletes the node at
*index index of a dlistint_t linked list.
*
*@head: Head
*@index: The index
*
*Return: 1 if it succeeded, -1 if it failed
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	size_t count = 0;
	dlistint_t *tmp;

	if (index == 0)
	{
		tmp = *head;
		*head = (*head)->next;
		if (*head != NULL)
		{
			(*head)->prev = NULL;
		}
		free(tmp);
		return (1);
	}
	tmp = *head;

	while (tmp != NULL && count < index)
	{
		tmp = tmp->next;
		count++;
	}
	tmp->prev->next = tmp->next;
	if (tmp->next != NULL)
	{
		tmp->next->prev = tmp;
	}
	free(tmp);
	return (1);
}
