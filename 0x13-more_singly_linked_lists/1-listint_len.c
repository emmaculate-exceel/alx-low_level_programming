#include "lists.h"

/**
 * listint_len - length of linked list
 * @h: head
 *
 * Return: count
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *pointer = h;
	size_t count = 0;

	while (pointer != NULL)
	{
		count = count + 1;
		pointer = pointer->next;
	}
	return (count);
}
