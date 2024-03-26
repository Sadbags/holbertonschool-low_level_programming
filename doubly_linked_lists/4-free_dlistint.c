#include "lists.h"
/**
 * free_listint - free list
 *@head: pointer
 *
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
