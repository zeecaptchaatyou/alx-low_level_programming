#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a doubly linked list
 * @head: double pointer, head node.
 * @n: data to be contained in new node to be created
 * Return: address of the new node or NULL, if the function fails
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *new_node;

if (head == NULL && *head == NULL)
return (NULL);

new_node = (dlistint_t *)malloc(sizeof(dlistint_t));
if (new_node == NULL)
return (NULL);

new_node->n = n;
new_node->prev = NULL;
new_node->next = *head;

if (*head != NULL)
(*head)->prev = new_node;

*head = new_node;

return (new_node);
}
