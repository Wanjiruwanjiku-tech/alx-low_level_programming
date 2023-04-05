#include "lists.h"

/**
*sum_listint - A function that returns the sum of
*all data in a linked list
*
*@head: Pointet to the head of the linked list
*
*Return: Sum of all data or 0 if empty
*/
int sum_listint(listint_t *head)
{
	int total_sum = 0;

	if (head == NULL)
	{
		return (0);
	}
	while (head) /*iterate the list*/
	{
		total_sum += head->n;
		head = head->next;
	}
	return (total_sum);
}
