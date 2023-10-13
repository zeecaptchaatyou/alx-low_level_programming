#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list.
* @head: head node pointer
 */
void free_dlistint(dlistint_t *head)
{

while (head != NULL)
{
dlistint_t *next = head->next;

free(head);
head = next;
}
}
