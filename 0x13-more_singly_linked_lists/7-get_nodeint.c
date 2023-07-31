#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 *get_nodeint_at_index - a function that returns the nth node
 *@head:a pointer
 *@index: integer to allocate
 * Return: NULL if the node is not found
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
listint_t *tmp;
unsigned int i = 0;

if (head == NULL)
{
return (NULL);
}
tmp = head;
while (tmp != NULL)
{
if (i == index)
{
return (tmp);
}
tmp = tmp->next;
i++;
}
return (tmp);
}
