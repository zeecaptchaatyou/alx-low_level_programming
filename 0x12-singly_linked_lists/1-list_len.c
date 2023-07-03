#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list list_t
 * @h: pointer to the structue of the linked list
 * Return: literally what i just said :roll eyes:
*/
size_t list_len(const list_t *h)
{
unsigned int nd = 0;

while (h != NULL)
{
nd += 1;
h = h->next;
}
return (nd);
}


/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    list_t *head;
    list_t *new;
    list_t hello = {"World", 5, NULL};
    size_t n;

    head = &hello;
    new = malloc(sizeof(list_t));
    if (new == NULL)
    {
        printf("Error\n");
        return (1);
    }
    new->str = strdup("Hello");
    new->len = 5;
    new->next = head;
    head = new;
    n = list_len(head);
    printf("-> %lu elements\n", n);
    free(new->str);
    free(new);
    return (0);
}
