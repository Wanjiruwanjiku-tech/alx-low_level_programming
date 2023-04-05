#include "lists.h"

/**
*add_nodeint_end - A function that adds a new node
*at the end of the linked list
*@head: A pointer to the linked list
*@n: Data for the data field
*Return: Address of the new element
*	Null if failed
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node2;
	listint_t *temp_var;
	/*Allocate Memory*/
	new_node2 = malloc(sizeof(listint_t));
	if (new_node2 == NULL)
	{
		return (NULL);
	}
	/*Set the data field*/
	new_node2->n = n;
	/*Set the next field*/
	new_node2->next = NULL;
	*head = new_node2;

	if (*head == NULL)
	{
		*head = new_node2;
		return (new_node2);
	}
	else
	{
		temp_var = *head;

		while (temp_var->next)
		{
			temp_var = temp_var->next;
		}
		temp_var->next = new_node2;
	}
	return (new_node2);
}
