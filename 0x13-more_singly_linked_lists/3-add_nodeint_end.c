#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of listint_t
 * @head: pointer to pointer to the head node
 * @n: dat of node to be added
 * Return: address of the added node upon success upon success otherwise NULL
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *ptr, *temporary_tail = *head;

if (head == NULL)
return (NULL);

ptr = (listint_t *)malloc(sizeof(listint_t));
if (ptr == NULL)
return (NULL);

ptr->n = n;
ptr->next = NULL;

if (*head == NULL)
*head = ptr;

else
{
temporary_tail = *head;
while (temporary_tail->next != NULL)
temporary_tail = temporary_tail->next;

temporary_tail->next = ptr;

}
return (ptr);
}
