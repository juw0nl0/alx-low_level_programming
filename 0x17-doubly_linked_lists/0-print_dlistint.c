#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - prints all elements of a dlistint_t list.
 * @h: head of a doubly linked list
 * Return: the number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	for (count = 0; h != NULL; count++)
	{
		printf("%d\n ", h->n);
		h = h->next;
	}
	count++;
	return (count);
}
