#include "lists.h"
/**
* add_node - Function adds a new node.
* @head: The head node.
* @strng: parameter string in the structure.
* Return:The head of the linked list.
*/
list_t *add_node(list_t **head, const char *strng)
{
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
	return (NULL);
	}

		new->str = strdup(strng);
		new->len = strlen(strng);
		new->next = *head;
		*head = new;

		return (*head);
}
