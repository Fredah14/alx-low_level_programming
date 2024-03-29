#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * *insert_nodeint_at_index - inserts a new node at a given position
 * @head: a pointer to the first node of the listint_t list
 * @idx: the index of the list where the new node should be added.
 * Index starts at 0
 * @n: the integer to store in the new node
 *
 * Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
unsigned int nthnode;
listint_t *new;
listint_t *current = *head;
new = malloc(sizeof(listint_t));
if (new == NULL)
return (NULL);
new->n = n;
if (idx == 0)
{
new->next = current;
*head = new;
return (new);
}
for (nthnode = 0; nthnode < (idx - 1); nthnode++)
{
if (current == NULL || current->next == NULL)
return (NULL);
current = current->next;
}
new->next = current->next;
current->next = new;
return (new);
}
