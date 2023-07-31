#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint_end - a function that adds a new node at the end
 *@head:a pointer to a pointer
 *@n:integer
 * Return:the address of the new element or NULL if it fails
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *new = malloc(sizeof(listint_t));
listint_t *tmp = *head;

if (new == NULL)
{
return (NULL);
}
new->n = n;
new->next = NULL;
if (*head == NULL)
{
*head = new;
return (new);
}
while (tmp->next != NULL)
{
tmp = tmp->next;
}
tmp->next = new;
return (new);
}
