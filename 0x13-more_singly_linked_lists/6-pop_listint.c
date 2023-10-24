#include "lists.h"
/**
 * pop_listint - deletes the head node
 * @head : pointer to the head of the linked list
 * Return: head node
 */
int pop_listint(listint_t **head)
{
listint_t *err;
int i;

err = *head;

if (err == NULL)
return (0);

*head = err->next;
i = err->n;
free(err);
return (i);
}
