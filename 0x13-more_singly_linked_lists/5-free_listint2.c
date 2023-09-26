#include "lists.h"

/**
 * free_listint2 - frees a listint_t list and
 * sets head to NULL
 * @head: pointer to the address of the head of
 * listint_t list
 */
void free_listint2(listint_t **head)
{
	listint_t *current;

	if (head == NULL)
		return;

	while (*head)
	{
		current = (*head)->next;
		free(*head);
		*head = current;
	}
	head = NULL;
}
