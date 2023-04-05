#include "lists.h"
#include<stdio.h>

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
		h = h->next;
		num++;
	}
	return (num);
}
