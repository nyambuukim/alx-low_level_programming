#include "lists.h"
#include <stdio.h>

/**
 * listint_len - function that returns elements number in listint_t list
 * @h: pointer to the head of the listint_t list
 * Return: number of elememnts in the list
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
