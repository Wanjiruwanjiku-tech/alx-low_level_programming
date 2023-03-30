#include "lists.h"

/**
* add_node - adds a new node at the beginning of
* list_t list
* @head: address of node
* @str: string to add
* Return: address of new element, NULL if it failed
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode; /*pointer to our new node*/

	/*check if string is null*/
	if (str == NULL)
	{
		return (NULL);
	}
	/*Allocate memory for new node*/
	newNode = malloc(sizeof(list_t));
	/*check if successfull*/
	if (newNode == NULL)
	{
		return (NULL);
	}
	/*Dup string and add it to new node*/
	newNode->str = strdup(str);
	/*check if strdup was successfull*/
	if (newNode->str == NULL)
	{
		free(newNode);
		return (NULL);
	}
	/*set node length to len of string*/
	newNode->len = strlen(str);
	/*set the next field*/
	newNode->next = *head;
	*head = newNode;

	return (newNode); /*return pointer to new node*/
}
