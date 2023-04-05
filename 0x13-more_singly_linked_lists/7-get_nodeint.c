#include "lists.h"

/**
*get_nodeint_at_index - A function that returns the nth
*node of a linked list
*@head: Pointer to the head node
*@index: Index of nodes starting from 0
*
*Return: nth node or null if nonexistant
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count;

	while (head)
	{
		if (index == count)
		{
			return (head);
		}
		head = head->next;
		count++;
	}
	return (NULL);
}
