#include "lists.h"

/**
*sum_dlistint - A function that returns the sum
*of all the data (n) of a dlistint_t linked list.
*
*@head: Pointer to head of list
*
*Return: sum or 0 is list is empty
*/
int sum_dlistint(dlistint_t *head)
{
	int sum_node;

	sum_node = 0;

	if (head != NULL)
	{
		while (head->prev != NULL)
		{
			head = head->prev;
		}
		while (head != NULL)
		{
			sum_node += head->n;
			head = head->next;
		}
	}
	return (sum_node);
}
