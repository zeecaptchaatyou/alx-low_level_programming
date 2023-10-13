#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list
 * @head: head node pointer
*/
void free_dlistint(dlistint_t *head)
{
dlistint_t *h = head;

while (h != NULL)
{
head = h;
free(head);
h = h->next;
}}
