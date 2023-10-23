#include "lists.h"

/**
 * print_listint - prints list members
 * @h: head of the list
 *
 * Return: node
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *pointer = h;
	size_t count = 0;

	while (pointer != NULL)
	{
		printf("%d\n", pointer->n);
		pointer = pointer + 1;
		pointer = pointer->next;
	}
	return (pointer);
}
