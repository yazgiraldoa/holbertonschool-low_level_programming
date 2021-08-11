#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node_end - function that adds a new node at the end of a list_t list
 * @head: double pointer that points at the beginning of the list
 * @str: data part of the new node
 * Return: address of new element or NULL if fails
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *last = *head;
	char *str_copy = strdup(str);

	new = malloc(sizeof(list_t));
	if (new == NULL || str_copy == NULL)
	{
		free(str_copy);
		free(new);
		return (NULL);
	}

	new->str = str_copy;
	new->len = strlen(str_copy);
	new->next = NULL;

	if (*head == NULL)
		*head = new;
	else
	{
		while (last->next != NULL)
			last = last->next;
		last->next = new;
	}
	return (new);
}
