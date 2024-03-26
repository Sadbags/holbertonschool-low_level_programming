#include "lists.h"
/**
 * print_dlistint - prints all elements of a list
 * @h: pointer to the list
 *
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	int count;
	const dlistint_t *tmp;

	tmp = h;

	for (count = 0; tmp != NULL; count++)
	{

		printf("%i\n", tmp->n);
		tmp = tmp->next;
	}
	return (count);
}
