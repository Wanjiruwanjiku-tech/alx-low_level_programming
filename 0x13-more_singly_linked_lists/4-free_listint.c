#include "lists.h"


/**
* free_listint - frees a list
* @head: the head of the list
*
*Return: nothing
*/
void free_listint(listint_t *head)
{
	listint_t *temp_var;

	while (head)
	{
		temp_var = head->next;
		free(head);
		head = temp_var;
	}
}
