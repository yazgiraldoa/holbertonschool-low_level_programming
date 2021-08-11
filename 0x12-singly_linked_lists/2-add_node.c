#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node - function that adds a new node at
 * the beginning of a list_t list.
 * @head: double pointer that points at the beginning of the list
 * @str: data part of the new node
 * Return: address of new element or NULL if fails
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	char *str_copy = strdup(str);

	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(list_t));
	if (new == NULL || str_copy == NULL)
	{
		free(new);
		free(str_copy);
		return (NULL);
	}
	new->str = str_copy;
	new->len = strlen(str_copy);
	new->next = *head;
	*head = new;

	return (new);
}
