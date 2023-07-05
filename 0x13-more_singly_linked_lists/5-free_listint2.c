#include "lists.h"

/**
 * free_listint2 - sets the head to NULL and also does what 4 does (copycat)
 * @head: blah to blah to blahblahblah gosh I'm tired of typing this
 * Return: Nada.
*/
void free_listint2(listint_t **head)
{
listint_t *ptr = *head;

if (*head != NULL)
{
while (ptr)
{
ptr = (*head)->next;
free(*head);
*head = ptr;
}
head = NULL;
}
}
