#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - function that deletes the head node
 * of a listint_t linked list
 * @head: double pointer that points to a list
 * Return: head node’s data (n) or 0 if head is NULL
 */

int pop_listint(listint_t **head)
{
	listint_t *head_copy;
	int data;

	if (*head == NULL)
		return (0);

	head_copy = *head;
	data = head_copy->n;
	*head = head_copy->next;
	free(head_copy);

	return (data);
}
