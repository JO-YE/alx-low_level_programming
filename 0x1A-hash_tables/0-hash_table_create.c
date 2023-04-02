#include "hash_tables.h"

/**
* hash_table_create - a function that create a hash table
* @size: the size of the array
*
* Return: returns a pointer to the newly created hash table
**/

hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int index;
	hash_table_t *table = NULL;

	table = malloc(sizeof(hash_table_t));
	if (table == NULL)
		return (NULL);

	table->size = size;
	table->array = malloc(sizeof(hash_node_t *) * size);

	if (!(table->array))
		return (NULL);

	for (index = 0; index < size; index++)
	{
		table->array[index] = NULL;
	}
	return (table);
}
