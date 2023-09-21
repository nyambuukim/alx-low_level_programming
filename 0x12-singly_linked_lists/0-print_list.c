#include "lists.h"

/**
 * print_list - Prints the list elements.
 * @current: Points to the head of.
 * Return: The number of nodes.
 */

size_t print_list(const list_t *current)
{
        size_t count = 0;

                while (current != NULL)
                {
                        if (current->str == NULL)
                        printf("[0] (nil)\n");
                        else
                        printf("[%u] %s\n", current->len, current->str);

                        current = current->next;
                        count++;
                }
                return (count);
}
