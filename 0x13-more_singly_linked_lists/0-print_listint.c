#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_listint - a function that prints a linked list
 *@h:a pointer
 *
 * Return:the number of nodes
 */

size_t print_listint(const listint_t *h)
{
size_t i = 0;
while (h != NULL)
{
printf("%d\n", h->n);
i++;
h = h->next;
}
return (i);
}
