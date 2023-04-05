#include "lists.h"

/**
*add_nodeint - A function that adds a new node at the
*begining of a linked list
*@head: A pointer to the head if the linked list
*@n: Data for the data field
*
*Return: Address of new node
*	Null if failed
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node1;

	/*Allocate memory for new node.*/
	new_node1 = malloc(sizeof(listint_t));
	if (new_node1 == NULL)
	{
		return (NULL);
	}
	/*Set the data field*/
	new_node1->n = n;
	/*Set the next field*/
	new_node1->next = *head;
	/*Place new node at the begining*/
	*head = new_node1;

	return (new_node1);
}
