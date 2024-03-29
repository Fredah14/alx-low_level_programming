#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint2 - frees a listint_t list
 * @head: a pointer to the listint_t list to free
 *
 * Description: the fucnction sets the head to NULL
 *
 */
void free_listint2(listint_t **head)
{
listint_t *current;
if (head == NULL)
return;
while (*head)
{
current = (*head)->next;
free(*head);
*head = current;
}
*head = NULL;
}
