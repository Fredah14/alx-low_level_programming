#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * *reverse_listint - reverses a listint_t linked list.
 * @head: a pointer to the first node of the listint_t list
 *
 * Return: a pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
listint_t *prev;
listint_t *next;
if (head == NULL || *head == NULL)
retrun (NULL);
prev = NULL;
while ((*head)->next != NULL)
{
next = (*head)->next;
(*head)->next = prev;
prev = *head;
*head = next;
}
(*head)->next = prev;
return (*head);
}
