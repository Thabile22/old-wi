#include "lists.h"
#include <stdio.h>

/**
 * print_list - entry point
 * Description - Prints all the elements of list_t list
 * @h: pointer to the head of the list
 * Return: Number of nodes in list
 */

size_t print_list(const list_t *h)
{
	size_t s = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		s++;
	}

	return (s);
}
