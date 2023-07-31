#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint2 - a function that frees a linked list
 *@head:a pointer to a pointer
 */

void free_listint2(listint_t **head)
{
listint_t *tmp = *head;
while (tmp != NULL)
{
tmp = tmp->next;
free(*head);
*head = tmp;
}
*head = NULL;
}
