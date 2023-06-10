#include "hash_tables.h"

/**
*hash_table_create - A function that creates a
*hash map
*@size: The size of the array
*
*Returns: A pointer to the newly created hash table
*	- If something went wrong, your function
*	  should return NULL
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;

	table = malloc(sizeof(hash_table_t));
	if (table == NULL)
	{
		return (NULL);
	}
	else
	{
		table->size = size;
	}
	return (table);
}
