#include "lists.h"
/**
 * list_len - Returns elements in a linked list_t list.
 * @p: Parameter holding list
 * Return: the number of nodes
 */
size_t list_len(const list_t *p)
{
        size_t s;

        for (s = 0; p != NULL; s++)
        {
                p = p->next;
        }

        return (s);
}
