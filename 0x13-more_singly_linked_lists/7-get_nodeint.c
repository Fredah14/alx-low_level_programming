#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * *get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: a pointer to the first node in the linked list
 * @index: is the index of the node, starting at 0
 *
 * Return: the nth node, and if the node does not exist, return NULLL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int nthnode;
for (nthnode = 0; nthnode < index; nthnode++)
{
if (head == NULL)
return (NULL);
head = head->next;
}
return (head);
}
