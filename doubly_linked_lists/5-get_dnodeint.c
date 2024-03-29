#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a linked list
 * @head: head pointer
 * @index: parameter
 * Return: Null if the node does not exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
unsigned int i = 0;
dlistint_t *temp;

for (temp = head; temp != NULL; temp = temp->next)
{
if (i == index)
return (temp);
i++;
}
return (NULL);
}
