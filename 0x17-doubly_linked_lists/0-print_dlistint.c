#include "lists.h"

/**
 * print_dlistint - prints all the elements of a doubly linked list
 * @h: head node
 * Return: number of nodes printed
*/
size_t print_dlistint(const dlistint_t *h)
{
const dlistint_t *head;
size_t n = 0;

if (h == NULL)
return (EXIT_FAILURE);

head = h;
while (head->next != NULL)
{
printf("%d\n", head->n);
head = head->next, n++;
}
printf("%d\n", head->n);
return (n + 1);
}
