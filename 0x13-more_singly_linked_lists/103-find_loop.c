#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: a pointer to the first node of the listint_t list
 *
 * Return: The address of the node where the loop starts,
 * or NULL if there is no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
listint_t *point1;
listint_t *point5;
if (head == NULL || head->next == NULL)
return (NULL);
point1 = head->next;
point5 = (head->next)->next;
while (point5)
{
if (point1 == point5)
{
point1 = head;
while (point1 != point5)
{
point1 = point1->next;
point5 = point5->next;
}
return (point1);
}
point1 = point1->next;
point5 = (point5->next)->next;
}
return (NULL);
}
