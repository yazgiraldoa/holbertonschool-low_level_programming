#include "hash_tables.h"

/**
 * hash_table_delete - function that deletes a hash table.
 * @ht: hash table to delete.
 * Return: nothing.
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *ht_aux_1, *ht_aux_2;
	unsigned long int position = 0;

	if (!ht)
		return;

	while (position < ht->size)
	{
		ht_aux_1 = ht->array[position];
		while (ht_aux_1 != NULL)
		{
			ht_aux_2 = ht_aux_1;
			free(ht_aux_2->key);
			free(ht_aux_2->value);
			free(ht_aux_2);
			ht_aux_1 = ht_aux_1->next;
		}
		free(ht_aux_1);
		position++;
	}
	free(ht->array);
	free(ht);
}
