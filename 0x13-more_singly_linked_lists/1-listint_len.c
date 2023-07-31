#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * listint_len -  a function that returns the number of elements
 *@h:a pointer
 *
 * Return:the number of nodes
 */

size_t listint_len(const listint_t *h)
{
int i = 0;
const listint_t *tmp = h;
while (tmp != NULL)
{
tmp = tmp->next;
i++;
}
return (i);
}
