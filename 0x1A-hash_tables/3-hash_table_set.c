#include "hash_tables.h"

/**
* hash_table_set - function that adds an element to the hash table
* @ht: hash table
* @key: key
* @value: value associated to the key
* Return: 1 if it succeeded, 0 otherwise
*/

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
    unsigned long int index = 0;
	hash_node_t *new_node, *ht_position;

	if (strcmp(key, "") == 0 || ht == NULL)
		return (0);

	index = key_index((unsigned char *)key, ht->size);
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);
	ht_position = ht->array[index];
	
    if (ht_position != NULL && strcmp(ht_position->key,key) == 0)
    {
		free(ht_position->value);
		free(new_node);
		ht_position->value = strdup(value);
		return (1);
	}
	else if (ht_position != NULL && strcmp(ht_position->key,key) != 0)
	{
		new_node->key = strdup(key);
		new_node->value = strdup(value);
		new_node->next = ht->array[1];
		ht->array[0] = new_node;
		return (1);
	}
	else
	{
		new_node->key = strdup(key);
		new_node->value = strdup(value);
		new_node->next = ht_position;
		ht->array[index] = new_node;
		return (1);
	}
	return (0);
}
