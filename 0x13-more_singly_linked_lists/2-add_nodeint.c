#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - function that adds a new node at
 * the beginning of a listint_t list
 * @head: double pointer that points at the beginning of the list
 * @n: data part of the list
 * Return: address of new element or NULL if fails
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
