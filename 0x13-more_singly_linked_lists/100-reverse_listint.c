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
listint_t *previouslist = NULL;
listint_t *nextlist = NULL;
while ((*head)
{
next = (*head)->next;
(*head)->next = previouslist;
previouslist = *head;
*head = next;
}
*head = previouslist;
return (*head);
}
