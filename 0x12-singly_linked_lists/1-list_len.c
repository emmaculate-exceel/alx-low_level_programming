#include "lists.h"
/**
 * list_len - returns number of elements list.
 * @h: linked list.
 * Return: elements list.
 */

size_t list_len(const list_t *h)
{
	size_t nodes;

	nodes = 0;
	while (h != NULL)
	{
		h = h->next;
		nodes++;
	}
	return (nodes);
}
