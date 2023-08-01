#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * reverse_listint - a function that reverses a linked list
 * @head: a pointer
 * Return: a pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
listint_t *prevnode = NULL;
listint_t *nextnode = NULL;

while (*head != NULL)
{
nextnode = (*head)->next;
(*head)->next = prevnode;
prevnode = *head;
*head = nextnode;
}
*head = prevnode;
return (*head);
}

