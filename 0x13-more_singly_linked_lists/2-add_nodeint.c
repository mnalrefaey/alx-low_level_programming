#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint - a function that adds a new node at the beginning
 *@head:a pointer to a pointer
 *@n:integer
 * Return:the address of the new element or NULL if it fails
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *new = malloc(sizeof(listint_t));
if (head == NULL || new == NULL)
{
return (NULL);
}
new->n = n;
new->next = *head;
*head = new;
return (*head);
}
