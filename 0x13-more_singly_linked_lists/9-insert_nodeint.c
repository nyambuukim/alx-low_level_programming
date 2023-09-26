#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer that addresses the head of the linked list
 * @idx: index where the new node should be added
 * @n: data to be stored in the new node
 *
 * Return: address of the new node or NULL if its failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *current;
	unsigned int h;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	current = *head;
	for (h = 0; h < idx - 1 && current != NULL; h++)
		current = current->next;
	if (current == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->next = current->next;
	current->next = new_node;

	return (new_node);
}
