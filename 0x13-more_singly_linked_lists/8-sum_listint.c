#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n) of a listint_t linked list
 * @head: a pointer to the first node in the linked list
 *
 * Return: the sum of all the data, if the list is empty, return 0
 */
int sum_listint(listint_t *head)
{
int sum = 0;
listint_t *current = head;
while (current)
{
sum += current->n;
current = current->next;
}
return (sum);
}
