#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list list_t
 * @h: pointer to the structue of the linked list
 * Return: literally what i just said :roll eyes:
*/
size_t list_len(const list_t *h)
{
unsigned int nd = 0;

while (h != NULL)
{
nd += 1;
h = h->next;
}
return (nd);
}
