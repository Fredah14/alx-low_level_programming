#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list, and returns the head node’s data (n)
 * @head: a pointer to the first node of the listint_t list
 *
 * Return: the head node's data, and if the linked list is empty return 0
 */
int pop_listint(listint_t **head)
{
listint_t *current;
int data;
if (*head == NULL)
return (0);
current = *head;
data = (*head)->n;
*head = (*head)->next;
free(current);
return (data);
}
