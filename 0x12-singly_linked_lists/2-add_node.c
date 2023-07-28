#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - a function that adds a new node
 * @head: double pointer
 * @str: new string
 *
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
list_t *n;
unsigned int len = 0;
while (str[len])
len++;
n = malloc(sizeof(list_t));
if (!n)
return (NULL);
n->str = strdup(str);
n->len = len;
n->next = (*head);
(*head) = n;
return (*head);
}

