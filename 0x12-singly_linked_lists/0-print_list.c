#include "lists.h"
#include <stdio.h>

/**
 * print_list - function that prints all elements of a list_t list
 * @h: structure
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] %s\n", "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		i++;
	}

	return (i);
}
