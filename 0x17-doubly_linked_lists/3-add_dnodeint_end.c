#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list
 * @head: double head node pointer
 * @n: data in new node to be created
 * Return: address of the new node or NULL if the function fails
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *new = (dlistint_t *)malloc(sizeof(dlistint_t)), *tail = *head;
if (new == NULL)
return (NULL);

new->n = n;
new->next = NULL;

if (*head == NULL)
{
new->prev = NULL;
*head = new;
return (new);
}

while (tail->next != NULL)
tail = tail->next;


new->prev = tail;
tail->next = new;

return (new);
}
