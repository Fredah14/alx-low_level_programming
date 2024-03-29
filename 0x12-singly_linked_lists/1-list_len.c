#include <stdlib.h>
#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list
 * @h: pointer to the list_t list
 *
 * Return: the number of elements in a linked list_t list.
 */
size_t list_len(const list_t *h)
{
size_t nodes;
nodes = 0;
while (h != NULL)
{
h = h->next;
nodes++;
}
return (nodes);
}
