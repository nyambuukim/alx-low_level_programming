#include "lists.h"
/**
 * add_node_end - Adds a new node
 * at the end of a list_t list.
 * @head: Parameter that point to head of the
 * linked list
 * @strng: Parameter with the string.
 * Return: the address of the new element,
 * or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *strng)
{
        list_t *new, *tmp;

        new = malloc(sizeof(list_t));
        if (new == NULL)
        {
                return (NULL);
        }
        new->str = strdup(strng);
        new->len = strlen(strng);
        new->next = NULL;

        tmp = *head;
        if (*head == NULL)
        {
                *head = new;
        }
        else
        {
                while (tmp->next)
                {
                        tmp = tmp->next;
                }
                tmp->next = new;
        }

        return (new);
}
