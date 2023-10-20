#include "lists.h"

/**
 * free_list - free list
 * @head: head of list.
 * Return: Nothing.
 */

void free_list(list_t *head)
{
	list_t *cur_node;

	while ((cur_node = head) != NULL)
	{
		head = head->next;
		free(cur_node->str);
		free(cur_node);
	}
}
