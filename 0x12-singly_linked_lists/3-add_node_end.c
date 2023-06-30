#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list.
 * @head: double pointer to the list_t list
 * @str: string to put in the new node
 *
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
list_t *new, *temp;
size_t newch;

new = malloc(sizeof(list_t));
if (new == NULL)
return (NULL);

new->str = strdup(str);
for
(newch = 0;
str[newch];
newch++);
new->len = newch;
new->next = NULL;
temp = *head;
if (temp == NULL)
{
*head = new;
}
else
{
while (temp->next != NULL)
temp = temp->next;

temp->next = new;
}
return (*head);
}
