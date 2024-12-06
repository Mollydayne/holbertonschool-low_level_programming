#include "lists.h"

/**
 * free_list - Frees a  list.
 * @head: Pointer to the head of the list.
 * Return: void.
 */
void free_list(list_t *head)
{
	list_t *stock;

	while (head != NULL)
	{
		stock = head;
		head = head->next;

		free(stock->str);
		free(stock);
	}
}
