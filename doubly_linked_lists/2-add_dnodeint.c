#include "lists.h"

/**
 * add_nodeint - adds node at the beggining of a list
 * @head: doule pointer
 * @n: element to be added
 * Return: address of new element, or NULL
 * if it failed
 */
dlistint_t *add_nodeint(dlistint_t **head, const int n)
{

dlistint_t *tmp = malloc(sizeof(dlistint_t));

if (tmp == NULL)
{
return (NULL);
}
tmp->n = n;
tmp->next = *head;
*head = tmp;

return (tmp);
}
