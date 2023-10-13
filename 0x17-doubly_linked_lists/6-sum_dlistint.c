#include "lists.h"

/**
 * sum_dlistint - calculates the sum of all data of a dlistint_t linked list
 * @head: head node pointer (I'm tired of writing this all the time!)
 * Return: sum of all data in the list or 0, if it's empty
*/
int sum_dlistint(dlistint_t *head)
{
size_t n = 0;
dlistint_t *temp = head;

if (head == NULL)
return (0);

while (temp != NULL)
n++, temp = temp->next;

return (n);
}
