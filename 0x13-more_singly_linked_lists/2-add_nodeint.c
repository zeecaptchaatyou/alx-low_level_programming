#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of listint_t
 * @head: pointer to pointer to head node
 * @n: data to be int the new node added
 * Return: address of the new node upon success, otherwise NULL
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *ptr, *temporary_head;
if (head == NULL)
return (NULL);

ptr = (listint_t *)malloc(sizeof(listint_t));
if (ptr == NULL)
return (NULL);

if (*head == NULL)
*head = ptr;
/*this shit works like the non-recursive string reversal method*/
else
{
temporary_head = *head;
*head = ptr;
ptr->n = n;
ptr->next = temporary_head;
}
return (ptr);
}
