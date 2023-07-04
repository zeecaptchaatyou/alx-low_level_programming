#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list
 * @head: double pointer whom I am now sure of its use
 * @str: string to be stored in the new node
 * Return: pointer to the new element
*/
list_t *add_node_end(list_t **head, const char *str)
{
size_t i = 0;

list_t *ptr = (list_t *)malloc(sizeof(list_t)), *temp_ptr = *head;
if (ptr == NULL)
return (NULL);

while (str[i] != '\0')
i++;


ptr->str = strdup(str);

if (ptr->str == NULL)
{
free(ptr);
return (NULL);
}
ptr->len = i;
ptr->next = NULL;

if (*head == NULL)
{
*head = ptr;
}
else
{
while (temp_ptr->next != NULL)
temp_ptr = temp_ptr->next;

temp_ptr->next = ptr;
}
return (*head);
}
