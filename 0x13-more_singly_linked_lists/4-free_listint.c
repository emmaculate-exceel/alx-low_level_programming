#include "lists.h"

/**
 * free_listint - free linked list
 * @head: head
 *
 * Return: nothin
 */
void free_listint(listint_t *head)
{
	listint_t *err;

	while (head != NULL)
	{
		err = head;
		head = head->next;
		free(err);
	}
}
