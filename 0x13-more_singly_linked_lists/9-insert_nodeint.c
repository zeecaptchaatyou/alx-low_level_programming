#include "lists.h"

/**
 * insert_nodeint_at_index - its names its function tooo obvious
 * @head: I said what I said, I won't speak bout this anymore
 * @idx: dunno why Mr Julien decided to use 'idx' but it means index
 * @n: number to be inserted at node index idx :roll eyes:
 * Return: address of the new node upon success otherwise NULL
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
size_t i = 0;
listint_t *ptr, *temp_head;

if (*head == NULL)
return (NULL);

ptr = (listint_t *)malloc(sizeof(listint_t));
if (ptr == NULL)
return (NULL);

temp_head = *head;
while (*head)
{
if (i == idx)
break;
temp_head = (temp_head)->next;
i++;
}

if (i != idx)
{
free(ptr);
return (NULL);
}

if (idx == 0)
{
ptr->n = n;
ptr->next = *head;
*head = ptr;
}
else
{
ptr->n = n;
ptr->next = temp_head->next;
temp_head->next = ptr;
}
return (ptr);
}
