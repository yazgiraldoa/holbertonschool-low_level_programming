#include "lists.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * delete_nodeint_at_index - function that deletes the node
 * at index of a listint_t linked list
 * @head: list
 * @index: index of the node to delete
 * Return: 1 if node is deleted successfully or -1 if not
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *aux = *head;
	listint_t *node_to_delete;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = aux->next;
		free(aux);
		return (1);
	}
	else
	{
		while (aux != NULL && i < index - 1)
		{
			aux = aux->next;
			i++;
		}

		if (i == index - 1)
		{
			node_to_delete = aux->next;
			aux->next = node_to_delete->next;
			free(node_to_delete);
			return (1);
		}
	}
	return (-1);
}
