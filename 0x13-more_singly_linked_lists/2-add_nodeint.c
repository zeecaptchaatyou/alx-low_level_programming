#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of listint_t
 * @head: pointer to pointer to head node
 * @n: data to be int the new node added
 * Return: address of the new node upon success, otherwise NULL
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *ptr, *temp_head;
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
temp_head = *head;
*head = ptr;
ptr->n = n;
ptr->next = temp_head;
}
return (ptr);
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    listint_t *head;

    head = NULL;
    add_nodeint(&head, 0);
    add_nodeint(&head, 1);
    add_nodeint(&head, 2);
    add_nodeint(&head, 3);
    add_nodeint(&head, 4);
    add_nodeint(&head, 98);
    add_nodeint(&head, 402);
    add_nodeint(&head, 1024);
    print_listint(head);
    return (0);
}
