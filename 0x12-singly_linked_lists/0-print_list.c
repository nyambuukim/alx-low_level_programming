#include "lists.h"
#include <stdio.h>

/**
* print_list - Prints the list elements.
* @current_node: Points to the head of.
* Return: The number of nodes.
*/

size_t print_list(const list_t *current_node)
{
	size_t count = 0;

	while (current_node != NULL)
	{
		if (current_node->str == NULL)
		printf("[0] (nil)\n");
		else
		printf("[%u] %s\n", current_node->len, current_node->str);

		current_node = current_node->next;
		count++;
	}
	return (count);
}
