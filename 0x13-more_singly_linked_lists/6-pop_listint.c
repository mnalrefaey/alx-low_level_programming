#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * pop_listint - a function that deletes the head node
 *@head:a pointer to a pointer
 * Return: return 0 if linked list is empty
 */

int pop_listint(listint_t **head)
{
listint_t *tmp;
int i;

if (head == NULL)
{
return (0);
}
else
{
tmp = *head;
i = tmp->n;
tmp = tmp->next;
free(*head);
*head = tmp;
}
return (i);
}
