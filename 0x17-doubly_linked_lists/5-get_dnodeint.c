#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
 * @head: double pointer to the head of the list
 * @index: node index
 * Return: node index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
dlistint_t *current;
size_t i = 0;

current = head;
i = 0;
while (current != NULL)
{
if (i == index)
return (current);
current = current->next;
i++;
}
return (NULL);
}
