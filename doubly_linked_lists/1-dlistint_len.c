#include "lists.h"
/**
 * dlistint_len - return the number of elements in
 * in a list
 * @h: pointer to list
 *
 * Return: number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t  *tmp;
	size_t count = 0;

	tmp = h;
	while (tmp)
	{
		count++;
		tmp = tmp->next;
	}
	return (count);
}
