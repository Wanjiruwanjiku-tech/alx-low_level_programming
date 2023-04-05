#include "lists.h"

/**
*insert_nodeint_at_index - A function that inserts a
*node at a specified index
*
*@head: Double pointer ti head node
*@idx: Index of nodes starting from 0
*@n: Data
*Return: Data at nth node or null if absent
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp_var = *head;
	/*Assign head ptr to temp variable*/
	listint_t *new_node3;
	/*Ptr to new node*/
	unsigned int count;
	/*To keep track of index*/
	if (temp_var == NULL && idx != 0)
	{
		return (NULL);
	}
	while (temp_var && count < idx - 1)
	{
		temp_var = temp_var->next;
		count++;
	}
	/**
	*Create a new node
	*using malloc and
	*check if malloc works
	*/
	new_node3 = malloc(sizeof(listint_t));
	if (new_node3 != NULL)
	{
		new_node3->n = n;

		if (idx == 0)
		{
			new_node3->next = *head;
			*head = new_node3;
			return (new_node3);
		}
		if (count + 1 == idx)
		{
			new_node3->next = temp_var->next;
			temp_var->next = new_node3;
			return (new_node3);
		}
	}
	return (NULL);
}
