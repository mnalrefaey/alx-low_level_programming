#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 *insert_nodeint_at_index - a function that inserts a new node
 *@head:a pointer
 *@idx:index of the new node
 *@n:data
 * Return: new node or (NULL) if the list is empty
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *tmp = *head;
unsigned int i;
listint_t *new;
if (*head == NULL)
{
return (NULL);
}
new = malloc(sizeof(listint_t));
if (new == NULL)
return (NULL);
new->next = *head;
new->n = n;
if (idx == 0)
{
new->next = *head;
*head = new;
return (new);
}
for (i = 0; tmp && i < idx; i++)
{
if (i == idx - 1)
{
new->next = tmp->next;
tmp->next = new;
return (new);
}
else
tmp = tmp->next;
}
return (NULL);
}
