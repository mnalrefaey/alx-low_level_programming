#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * find_listint_loop - a function that finds the loop
 * @head: linked list
 * Return: the address of the node where the loop starts or NULL
 */
 
listint_t *find_listint_loop(listint_t *head)
{
listint_t *p = head;
listint_t *f = head;

if (head != NULL)
return (NULL);

while (p && f && f->next)
{
f = f->next->next;
p = p->next;
if (f == p)
{
p = head;
while (p != f)
{
p = p->next;
f = f->next;
}
return (f);
}
}

return (NULL);
}

