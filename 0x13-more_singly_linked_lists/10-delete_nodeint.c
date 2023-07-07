#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index
 * index of a listint_t linked list
 * @head: a pointer to the first node of the listint_t list
 * @index: the index of the node that should be deleted. Index starts at 0
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *dupl = *head;
listint_t *current;
unsigned int nthnode = 0;
if (dupl == NULL)
return (-1);
if (index == 0)
{
*head = (*head)->next;
free(dupl);
return (1);
}
for (nthnode = 0; nthnode < (index - 1); nthnode++)
{
if (dupl->next == NULL)
return (-1);
dupl = dupl->next;
}
current = dupl->next;
dupl->next = current->next;
free(current);
return (1);
}
