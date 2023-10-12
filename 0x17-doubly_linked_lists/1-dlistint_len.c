#include "lists.h"

/**
 * dlistint_len - returns the length of a doubly linked list
 * @h: constant pointer to the head node
 * Return: literally what I just said!
*/
size_t dlistint_len(const dlistint_t *h)
{
size_t n = 0; /*number of nodes*/

while (h != NULL)
n++, h = h->next;

return (n);
}

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    dlistint_t *head;
    dlistint_t *new;
    dlistint_t hello = {8, NULL, NULL};
    size_t n;

    head = &hello;
    new = malloc(sizeof(dlistint_t));
    if (new == NULL)
    {
        dprintf(2, "Error: Can't malloc\n");
        return (EXIT_FAILURE);
    }
    new->n = 9;
    head->prev = new;
    new->next = head;
    new->prev = NULL;
    head = new;
    n = dlistint_len(head);
    printf("-> %lu elements\n", n);
    free(new);
    return (EXIT_SUCCESS);
}