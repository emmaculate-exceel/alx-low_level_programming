#include "lists.h"

/**
 * add_nodeint - adds a node to the linked list
 * @head: points to list
 * @n: num
 *
 * Return: node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *add_node;

	new_node = malloc(sizeof(listint_t));
	if (add_node != NULL)
	{
		add_node->n = n;
		add_node->next = *head;
	}
	else
		return (NULL);
	if (*head != NULL)
		add_node->next = *head;
	*head = add_node;
	return (add_node);
}
