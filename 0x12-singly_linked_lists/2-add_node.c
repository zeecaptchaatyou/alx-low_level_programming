#include "lists.h"

/**
 * add_node - adds a new node at the beginning of list_t
 * @head: I see this is a double pointer but, wtf am I supposed to use it for?
 * @str: - string in the new noe to be created
 * Return: address of the new element or null if it failed
*/
list_t *add_node(list_t **head, const char *str)
{
unsigned int i = 0;
list_t *ptr = (list_t *)malloc(sizeof(list_t));

if (ptr == NULL)
return (NULL);

while (str[i])
i++;
(ptr)->len = i;
(ptr)->str = strdup(str);
ptr->next = *head;
*head = ptr;
return (*head);
}
