#include "lists.h"

/**
*pop_listint - A function that deletes the head of a
*linked list
*
*@head: Double pointer to the head
*
*Return: Head node data or 0 if empty
*/
int pop_listint(listint_t **head)
{
	listint_t *temp_var;
	int tracker; /*To return data of the node*/

	/*Assign head to temp variable*/
	temp_var = *head;
	/*Store data in the tracker*/
	tracker = temp_var->n;
	/*Move head ptr to next node*/
	*head = temp_var->next;

	free(temp_var);

	return (tracker);
}
