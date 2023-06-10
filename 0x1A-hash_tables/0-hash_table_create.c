#include "hash_tables.h"

/**
*hash_table_create - A function that creates a
*hash map
*@size: The size of the array
*
*Return: A pointer to the newly created hash table
*	- If something went wrong, your function
*	  should return NULL
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;
	unsigned int i;

	if (size == 0)
		return (NULL);

	table = malloc(sizeof(hash_table_t));
	if (table == NULL)
	{
		return (NULL);
	}
	table->array = malloc(sizeof(hash_table_t *) * size);
	if (table->array == NULL)
	{
		free(table);
		return (NULL);
	}
	table->size = size;

	for (i = 0; i < size; i++)
	{
		table->array[i] = NULL;
	}
	return (table);
}
