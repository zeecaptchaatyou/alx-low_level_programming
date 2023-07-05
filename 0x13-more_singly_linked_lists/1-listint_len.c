#include "lists.h"

/**
 * listint_len - returns the number of elements in listint_t
 * @h: pointer tot he head node in listint_t
 * Return: number of elements in listint_t
*/
size_t listint_len(const listint_t *h)
{
size_t i = 0;

if (h == NULL)
return (0);

for ( ; h; i++)
h = h->next;

return (i);
}
