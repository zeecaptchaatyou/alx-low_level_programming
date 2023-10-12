#include "lists.h"

/**
 * dlistint_len - returns the length of a doubly linked list
 * @h: constant pointer to the head node
 * Return: literally what I just said!
*/
size_t dlistint_len(const dlistint_t *h)
{
size_t n = 0; /*number of nodes*/

while (h != NULL)
n++, h = h->next;

return (n);
}
