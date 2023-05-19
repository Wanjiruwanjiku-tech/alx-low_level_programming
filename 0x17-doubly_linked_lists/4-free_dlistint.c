#include "lists.h"

/**
*free_dlistint- A function that frees a dlistint_t lis
*
*@head: A pointer to the head
*Return: voud
*/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	if (head != NULL)
	{
		while (head->prev != NULL)
			head = head->prev;
	}
	while ((temp = head) != NULL)
	{
		head = head->next;
		free(temp);
	}
}
