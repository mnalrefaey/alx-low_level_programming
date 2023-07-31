#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - a function that deletes a node
 * @head: a pointer
 * @index: index of the node
 * Return: 1 if success, or -1 if fail
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *tmp = *head;
listint_t *new = NULL;
unsigned int count = 0;

if (*head == NULL)
return (-1);

if (index == 0)
{
*head = (*head)->next;
free(tmp);
return (1);
}
while (count < index - 1)
{
if (tmp == NULL || tmp->next == NULL)
return (-1);
tmp = tmp->next;
count++;
}
new = tmp->next;
tmp->next = new->next;
free(new);
return (1);
}
