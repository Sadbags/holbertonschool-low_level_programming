#include "lists.h"

/**
 * dlistint_len - lenght of dlistint
 *
 * @h: head pointer
 *
 * Return: the number of elements linked
 *
*/
size_t dlistint_len(const dlistint_t *h)
{
size_t count = 0;

while (h != NULL)
{
h = h->next;
count++;
}
return (count);
}
