#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 *sum_listint - a function that returns the sum of data(n)
 *@head:a pointer
 * Return: sum of (n) or (0) if the list is empty
 */

int sum_listint(listint_t *head)
{
listint_t *tmp;
int sum = 0;

if (head == NULL)
{
return (0);
}
tmp = head;
while (tmp != NULL)
{
sum += tmp->n;
tmp = tmp->next;
}
return (sum);
}
