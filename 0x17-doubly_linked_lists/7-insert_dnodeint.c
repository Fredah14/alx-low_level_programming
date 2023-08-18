#include "lists.h"
#include <stdlib.h>

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position.
 * @h: Pointer to a pointer to the head of the list.
 * @idx: Index of the position where the new node should be added.
 * @n: The integer value for the new node.
 * Return: The address of the new node, or NULL if it failed.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
if (h == NULL)
return (NULL);

dlistint_t *new_n;
new_n = malloc(sizeof(dlistint_t));
    
if (new_n == NULL)
return (NULL);

new_n->n = n;
    
if (idx == 0)
{
new_n->prev = NULL;
new_n->next = *h;

if (*h != NULL)
(*h)->prev = new_n;

*h = new_n;
return (new_n);
}

dlistint_t *current;
current = *h;
unsigned int i = 0;

while (current != NULL && i < idx - 1)
{
current = current->next;
i++;
}

if (current == NULL)
{
free(new_n);
return (NULL);
}

new_n->prev = current;
new_n->next = current->next;

if (current->next != NULL)
current->next->prev = new_n;

current->next = new_n;

return (new_n);
}
