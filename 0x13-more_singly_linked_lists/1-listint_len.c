#include "lists.h"

/**
 * listint_len - entry point 
 * Description -  returns the number of elements in a linked list
 * @h: linked list of type listint_t to print
 * Return: number of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		printf("%d\n", h->n);
		num++;
		h = h->next;
	}
	return (num);
}