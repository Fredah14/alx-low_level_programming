#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint_safe - frees a listint_t list
 * @h: a pointer to the first node of the linked list
 * Description: function can free lists with a loop, and sets the head to NULL
 *
 * Return: the size of the list that was free’d
 */
size_t free_listint_safe(listint_t **h)
{
size_t node = 0;
int sep;
listint_t *current;
if (!h || !*h)
return (0);
while (*h)
{
sep = *h - (*h)->next;
if (sep > 0)
{
current = (*h)->next;
free(*h);
*h = current;
node++;
}
else
{
free(*h);
*h = NULL;
node++;
break;
}
}
*h = NULL;
return (node);
}

