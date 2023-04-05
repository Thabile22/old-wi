#include "lists.h"

/**
 * print_listint - entry point
 * Description - Print all the elements of a list
 * @h: A linked list of type listint_
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t count = 0;
	
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
