#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list
 * @h: a pointer to the head of the listint_t list
 *
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
size_t node = 0;
while (h)
{
node++;
printf("%d\n", h->n);
h = h->next;
}
return (node);
}
