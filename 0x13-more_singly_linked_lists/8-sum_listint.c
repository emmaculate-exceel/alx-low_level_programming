#include <stdio.h>
#include "lists.h"
/**
 * sum_listint - calculates sum of data
 * @head : points to head
 * Return: sum
 */
int sum_listint(listint_t *head)
{
int sum = 0;

while (head)
{
sum += head->n;
head = head->next;
}
return (sum);
}
