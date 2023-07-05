#include "lists.h"

/**
 * print_listint - prints all the elements of listint_t
 * @h: pointer to the address of the first node
 * Return: number of nodes counted
*/
size_t print_listint(const listint_t *h)
{
size_t i = 0;
if (h == NULL)
return (0);
else
{
for ( ; h; i++)
{
printf("%d\n", h->n);
h = h->next;
}
return (i);
}
}
