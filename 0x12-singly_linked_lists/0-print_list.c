#include "lists.h"

/**
 * print_list - function that prints all the elements of a list_t list.
 * @h: param list
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t node_len;

	node_len = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		node_len++;
	}
	return (node_len);
}
