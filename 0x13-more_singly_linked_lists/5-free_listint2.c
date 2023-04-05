#include "lists.h"

/**
*free_listint2 - A function that frees a list and sets
*the head as null
*
*@head:A doyble pointer tho the head of the linked
*list
*
*Return: void type
*/
void free_listint2(listint_t **head)
{
	listint_t *temp_var;

	if (head) /* Check if null*/
	{
		while (*head)
		{
			temp_var = *head;
			*head = temp_var->next;
			free(temp_var);
		}
	}
}

