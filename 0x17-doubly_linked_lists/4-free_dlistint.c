#include "lists.h"
#include <stdlib.h>

/**
 * free_dlistint - Frees a dlistint_t list.
 * @head: Pointer to the head of the list.
 * Return: Always EXIT_SUCCESS.
 */
void free_dlistint(dlistint_t *head)
{
dlistint_t *current = head;

while (current != NULL)
{
dlistint_t *temp = current;
current = current->next;
free(temp);
}
return;
}
