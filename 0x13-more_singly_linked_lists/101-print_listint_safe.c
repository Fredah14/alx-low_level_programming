#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_listint_safe - prints a listint_t linked list
 * @head: a pointer to the head of the listint_t to check
 * Description: can print lists with a loop
 *
 * Return: the number of nodes in the list, and
 * if the function fails, exit the program with status 98
 */
size_t looped_listint_len(const listint_t *head)
{
const listint_t *child, *mother;
size_t node = 1;
if (head == NULL || head->next == NULL)
return (0);
child = head->next;
mother = (head->next)->next;
while (mother)
{
if (child == mother)
{
child = head;
while (child != mother)
{
node++;
child = child->next;
mother = mother->next;
}
child = child->next;
while (child != mother)
{
node++;
child = child->next;
}
return (node);
}
child = child->next;
mother = (mother->next)->next;
}
return (0);
}
/**
 * print_listint_safe - prints a listint_t linked list
 * @head: a pointer to the head of the listint_t list
 *
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
size_t node, index = 0;
node = looped_listint_len(head);
if (node == 0)
{
for (; head != NULL; node++)
{
printf("[%p] %d\n", (void *)head, head->n);
head = head->next;
}
}
else
{
for (index = 0; index < node; index++)
{
printf("[%p] %d\n", (void *)head, head->n);
head = head->next;
}
printf("-> [%p] %d\n", (void *)head, head->n);
}
return (node);
}
