#include "lists.h"

/**
 * list_len - entry point
 * Description - Returns number of elements in a linked list_t list
 * @h: pointer to the head of the linked list
 * Return: Number of nodes in the list
 */

size_t list_len(const list_t *h)
{
	size_t count_nodes = 0;

	while (h != NULL)
	{
		count_nodes++;

		h = h->next;
	}
	return (count_nodes);
}
