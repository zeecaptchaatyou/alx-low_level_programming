#include "lists.h"

/**
 * free_listint - frees listint_t from all boundages:laughing:
 * @head: pointer to the first node
 * Return: Nada
*/
void free_listint(listint_t *head)
{
listint_t *temp_head = head;
if (head == NULL)
return;

while (temp_head)
{
temp_head = head->next;
free(head);
head = temp_head;
}
}
