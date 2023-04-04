#include "lists.h"

/**
 * print_listint - entry point
 * Description - Print all the elements of a list
 * @h: A linked list of type listint_t
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}
	return (count);
}
