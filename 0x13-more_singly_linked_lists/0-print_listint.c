#include "lists.h"

/**
 * print_listint - a function that prints all the elements.
 *@h:linked list 
 *
 * Return:the number of nodes
 */

size_t print_listint(const listint_t *h)
{
int i = 0;
const listint_t *tmp = h;
while (tmp != NULL)
{
printf("%d\n", tmp->n);
tmp = tmp->next;
i++;
}
return (i);
}
