#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - function that inserts a new node
 * at a given position
 * @head: list
 * @idx: index of the node, starting at 0
 * @n: data of the new node
 * Return: address of the new node or NULL if head is NULL,
 * malloc fails or it is not possible to add node at index .
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new;
	listint_t *aux = *head;
	unsigned int i = 0;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	else
	{
		while (aux != NULL && i < idx - 1)
		{
			aux = aux->next;
			i++;
		}

		if (i == idx - 1)
		{
			new->next = aux->next;
			aux->next = new;
			return (new);
		}
	}
	return (NULL);
}
