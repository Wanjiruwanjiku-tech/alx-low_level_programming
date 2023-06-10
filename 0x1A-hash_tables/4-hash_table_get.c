#include "hash_tables.h"

/**
*hash_table_get - A function that retrives a value
*from an index with the associated key
*@ht: The hash map
*@key: The key
*
*Return: Returns the value associated with the element,
*or NULL if key couldn’t be found
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *temp;

	/* Check if ht and key are valid */
	if (ht == NULL || key == NULL || *key == '\0')
	{
		return (NULL);
	}
	/* Calculate index of the bucket */
	index = key_index((const unsigned char *)key, ht->size);
	if (index >= ht->size)
	{
		return (NULL);
	}
	/* Assign the head of the lined list in the */
	/* bucket to the variable temp*/
	temp = ht->array[index];

	/*iterate the linked list*/
	while (temp != NULL)
	{
		if (strcmp(temp->key, key) == 0)
			return (temp->value);
		temp = temp->next;
	}
	return (NULL);
}
