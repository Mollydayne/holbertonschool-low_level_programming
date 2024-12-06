#include <stddef.h>
#include <stdio.h>

#include "lists.h"

/**
 * print_list - Prints all the elements of a list_t list.
 * @h: Pointer to the head of the list_t list.
 *
 * Description: This function traverses a singly linked list of type list_t,
 *              printing each element's string and its length. If an element's
 *              string is NULL, it prints "[0] nil". The function returns the
 *              total number of nodes in the list.
 *
 * Return: The number of nodes in the list.
 */

size_t print_list(const list_t *h)

{
size_t node_count = 0;

while (h != NULL)
{
if (h->str == NULL)
{
	printf("[0] nil\n");
}
else
{
	printf("[%d] %s\n", h->len, h->str);
}
h = h->next;
node_count++;
}
return (node_count);
}
