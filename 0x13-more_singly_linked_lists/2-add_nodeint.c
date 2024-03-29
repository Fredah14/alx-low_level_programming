#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
** *add_nodeint - addds a new node at the beginning of a listint_t list
 * @n: integer for the new node to contain
 * @head: a pointer to the first node in the listint_t list
 *
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *new;
new = malloc(sizeof(listint_t));
if (new == NULL)
return (NULL);
new->n = n;
new->next = *head;
*head = new;
return (new);
}
