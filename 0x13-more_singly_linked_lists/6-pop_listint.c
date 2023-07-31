#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * pop_listint - a function that deletes the head node
 *@head:a pointer to a pointer
 * Return: value of nodes
 */

int pop_listint(listint_t **head)
{
listint_t *tmp;
int n;

if (head == NULL || *head == NULL)
{
return (0);
}
tmp = (*head)->next;
n = (*head)->n;
free(*head);
*head = tmp;
return (n);
}
