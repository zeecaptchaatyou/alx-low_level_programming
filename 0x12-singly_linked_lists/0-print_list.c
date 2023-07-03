#include "lists.h"

/**
 * print_list - prints all elements of a lis_t list.
 * @h: pointer to the structure of the linked list.
 * Return: number of nodes in the linked list.
*/
size_t print_list(const list_t *h)
{
size_t nd = 0;

if (h == NULL)
return (0);

while (h != NULL)
{
if (h->str == NULL)
printf("[0](nil)\n");
else
{
printf("[%u] %s\n", h->len, h->str);
}
h = h->next;
nd++;
}
return (nd);
}
