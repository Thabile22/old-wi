#include "lists.h"

/**
 * listint_len- entry point
 * Description - returns the number of elements in a linked list
 * @h: linked list of type listint_ to traverse
 * Return: number of node
 */

size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		num++;
		h = h->next;
	}

	return (0);
}
