#include "lists.h"

/**
 * free_listint - function that free a listint_t list
 * @head: pointer to the head of the listint_t list
 */
void free_listint(listint_t *head)
{
	listint_t *current;

	while (head != NULL)
	{
		current = head;
		head = head->next;
		free(current);
	}
}
