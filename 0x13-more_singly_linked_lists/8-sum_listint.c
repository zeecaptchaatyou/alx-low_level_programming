#include "lists.h"

/**
 * sum_listint - returns the sum of all the data in listint_t
 * @head: pointer to the head node
 * Return: sum of data contained in listint_t
*/
int sum_listint(listint_t *head)
{
size_t sum = 0;

if (head == NULL)
return (0);

while (head)
{
sum += head->n;
head = head->next;
}

return (sum);
}
