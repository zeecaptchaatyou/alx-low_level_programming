#include "lists.h"

/**
 * pop_listint - deletes the head node of listint_t
 * @head: won't be speaking bout this anymore :roll eyes:
 * Return: the deleted node's data;
*/
int pop_listint(listint_t **head)
{
int data;
listint_t *ptr;

if (*head == NULL)
return (0);

ptr = *head;
data = ptr->n;
*head = (*head)->next;

free(ptr);
return (data);
}
