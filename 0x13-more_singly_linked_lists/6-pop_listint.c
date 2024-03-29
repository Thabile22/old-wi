#include "lists.h"

/**
 * pop_listint - entry point
 * Desrpition - deletes the head node of a listint_t linked list
 * @head: pointer to the first element in the linked list
 * Return: the head node’s data (n), but if linked list is empty return 0
*/

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (!head || !*head)
		return (0);

	num = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (num);
}
