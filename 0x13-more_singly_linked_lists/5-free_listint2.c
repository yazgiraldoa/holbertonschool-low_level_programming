#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - function that frees a listint_t list
 * @head: double pointer that points to a list
 */

void free_listint2(listint_t **head)
{
	listint_t *aux;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		aux = *head;
		*head = aux->next;
		free(aux);
	}
	head = NULL;
}
