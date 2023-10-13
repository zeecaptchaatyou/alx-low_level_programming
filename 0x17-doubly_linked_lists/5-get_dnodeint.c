#include "lists.h"

/**
 * get_dnodeint_at_index -  returns the nth node of a dlistint_t linked list
 * @head: head node pointer
 * @index: we've talked about this!...it starts from zero tho
 * Return: adddress of the node found or NULL if it doesn't exit
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
size_t n = 0, i = 0;
dlistint_t *temp = head;

if (head == NULL)
return (NULL);

while (temp != NULL)
n++, temp = temp->next;

if (n < index)
return (NULL);

temp = head;

while (i != index)
temp = temp->next, i++;

return (temp);
}
/*need to get past commit error, will delete later*/