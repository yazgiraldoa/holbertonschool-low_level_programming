#include "hash_tables.h"

/**
 * hash_table_print - function that prints a hash table
 * @ht: hash table to print
 * Return: nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *ht_aux;
	unsigned long int position = 0;
	int found_key = 0;

	if (!ht)
		return;

	printf("{");
	while (position < ht->size)
	{
		ht_aux = ht->array[position];
		while (ht_aux != NULL)
		{
			if (found_key == 1)
				printf(", ");
			printf("'%s': '%s'", ht_aux->key,
				   ht_aux->value);
			found_key = 1;
			ht_aux = ht_aux->next;
		}
		position++;
	}
	printf("}\n");
}
