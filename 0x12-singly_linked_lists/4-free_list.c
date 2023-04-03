#include "lists.h"
#include <stdlib.h>

/**
 * free_list - entry point
 * Description - Frees a linked list
 * @head: a pointer to head the list
 */

void free_list(list_t *head)
{
	list_t *current;

	while (head)
	{
		current = head->next;
		free(head->str);
		free(head);
		head = current;
	}
}
