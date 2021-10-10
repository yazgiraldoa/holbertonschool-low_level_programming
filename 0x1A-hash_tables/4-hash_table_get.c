#include "hash_tables.h"

/**
 * hash_table_get - function that retrieves the value
 * associated with a key.
 * @ht:  hash table to look into
 * @key: key we are looking for
 * Return: value associated with the element,
 * or NULL if key couldn’t be found.
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index = 0;
	hash_node_t *ht_aux;

	if (!ht || strcmp(key, "") == 0)
		return (NULL);

	index = key_index((unsigned char *)key, ht->size);

	ht_aux = ht->array[index];

	while (ht_aux != NULL)
	{
		if (strcmp(ht_aux->key, key) == 0)
			return (ht_aux->value);
		ht_aux = ht_aux->next;
	}
	return (NULL);
}

