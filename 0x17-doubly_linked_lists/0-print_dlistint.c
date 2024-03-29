#include "lists.h"

/**
 * print_dlistint - prints all the elements of a doubly linked list
 * @h: head node
 * Return: number of nodes printed
*/
size_t print_dlistint(const dlistint_t *h)
{
size_t n = 0; /*number of nodes*/

if (h == NULL)
return (n);

while (h != NULL)
{
printf("%d\n", h->n);
h = h->next, n++;
}

return (n);
}
