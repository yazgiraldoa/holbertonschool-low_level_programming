#include "hash_tables.h"

/**
 * hash_table_create - function that creates a hash table
 * @size: size of the array
 * Return: pointer to newly created hash table or NULL if fails.
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_hashtable;
	int i = 0;

	new_hashtable = malloc(sizeof(hash_node_t));
	if (new_hashtable == NULL || size <= 0)
		return (NULL);

	new_hashtable->size = size;
	new_hashtable->array = malloc(sizeof(hash_node_t *) * size);
	if (new_hashtable->array == NULL)
	{
		free(new_hashtable);
		return (NULL);
	}

	while (new_hashtable->array[i])
	{
		new_hashtable->array[i] = NULL;
		i++;
	}
	return (new_hashtable);
}
