#include "hash_tables.h"

/**
*key_index - A function that returns the index of a
*key
*@key: Pointer to the key
*@size: The size of the array
*
*Return: Returns the index at which the
*	key/value pair should be stored in the array of the hash table
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int digests = hash_djb2(key);
	unsigned long int buckets = size;
	unsigned long int my_index;

	/**
	* To get the index take the % of digests
	*with the number of slots in the array
	*/
	my_index = digests % buckets;
	return (my_index);
}
