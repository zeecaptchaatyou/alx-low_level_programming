#include "lists.h"

/**
 * get_nodeint_at_index - its name is so long you'll grab what it
 * does right away :skull:
 * @head: pointer to the head node
 * @index: house number we're going to.....safe ride
 * Return: address of the house we visited if it exists, else NULL
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
size_t i = 0;
listint_t *ptr;

if (head == NULL)
return (NULL);

while (head)
{
if (i == index)
{
ptr = head;
break;
}
i++;
head = head->next;
}
return ((i == index) ? (ptr) : (NULL));
}
