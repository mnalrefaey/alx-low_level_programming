#include "list.t"

/**
 * print_list - a function that prints all the elements of a list_t list
 *
 *@h: a pointer of the list of elements
 *
 *Return: The number of nodes
 */

size_t print_list(const list_t *h)
{
size_t count = 0;
while (h != NULL)
{
printf("[%d] %s\n", _strlen(h->str), h->str ? h->str : "(nil)");
h = h->next;
count++;
}
return (count);
}






}

