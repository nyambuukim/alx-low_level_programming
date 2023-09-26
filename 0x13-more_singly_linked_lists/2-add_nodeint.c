#include "lists.h"

/**
 * add_nodeint - function that adds a new node at
 * the beginning of listint_t list
 * @head: pointer to the address in the head list
 * @n: value to be added to new node
 * Return: address of new element, or NULL if failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = *head;

	*head = new_node;

	return (new_node);
}
