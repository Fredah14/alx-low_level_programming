#include "lists.h"
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - Deletes the node at index index of a dlistint_t linked list.
 * @head: Pointer to a pointer to the head of the list.
 * @index: Index of the node that should be deleted.
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
dlistint_t *current;
unsigned int i;

if (*head == NULL)
return (-1);

current = *head;
 
if (index == 0)
{
*head = (*head)->next;
if (*head)
(*head)->prev = NULL;
free(current);
return (1);
}
for (i = 0; i < index; i++)
{
if (current == NULL)
return (-1);
current = current->next;
}
if (current == NULL)
return (-1);
if (current->prev)
current->prev->next = current->next;
if (current->next)
current->next->prev = current->prev;

free(current);

return (1);
}
