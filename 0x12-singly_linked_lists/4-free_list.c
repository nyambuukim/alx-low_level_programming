#include "lists.h"


/**
 * free_list - Frees a list_t list.
 * @head: Point to the head of the linked list.
 * Return: 0 (SUCCESS).
 */

void free_list(list_t *head)

{
        list_t *tmp;

        while (head)
        {
                tmp = head->next;
                free(head->str);
                free(head);
                head = tmp;
        }
}
