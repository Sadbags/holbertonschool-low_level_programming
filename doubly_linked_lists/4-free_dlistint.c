#include "lists.h"
/**
 * free_dlistint - free list
 *@head: start of list
 *
 * Return: None
 */
void free_dlistint(dlistint_t *head)
{
dlistint_t *tmp;

while (head != NULL)
{
tmp = head->next;
free(head);
head = tmp;
}
}
