#include "lists.h"

/**
 * add_nodeint_end - function that adds a new node at
 * the end of listint_t list
 * @head: pointer to the address of the head of listint_t list
 * @n: value to be added to the new node
 * Return: address of new element, or NULL if it has failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *current;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
		*head = new_node;
	else
	{
		current = *head;
		while (current->next != NULL)
			current = current->next;
		current->next = new_node;
	}
	return (new_node);
}
