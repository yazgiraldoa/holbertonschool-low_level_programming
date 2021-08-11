#include "lists.h"
#include <stdlib.h>

/**
 * free_list - function that frees a list_t list
 * @head: list
 */

void free_list(list_t *head)
{
	list_t *aux;
	char *aux_str;

	while (head != NULL)
	{
		aux_str = head->str;
		aux = head;
		head = head->next;
		free(aux_str);
		free(aux);
	}
}
