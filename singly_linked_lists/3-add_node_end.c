#include <stddef.h>
#include <stdio.h>
#include <string.h>

#include "lists.h"

/**
 * add_node_end - Adds a new node at the end of a list_t list.
 * @head: Pointer to the head of the list_t list.
 * @str: The string to be added to the new node.
 *
 * Return: The address of the new element, or NULL if it failed.
 */

list_t *add_node_end(list_t **head, const char *str)
{

	list_t *NewNode;
	list_t *ending;
	int strLenght;

	if (str == NULL)
		return (NULL);
	NewNode = malloc(sizeof(list_t));
	if (NewNode == NULL)
		return (NULL);

	NewNode->str = strdup(str);
	NewNode->next = 0;

	if (NewNode->str == NULL)
	{
		free(NewNode);
		return (NULL);
	}
	for (strLenght = 0; str[strLenght] != '\0'; strLenght++)
	{
	}
	NewNode->len = strLenght;
	if (*head == NULL)
	{
		*head = NewNode;
	}
	else
	{
		ending = *head;
		while (ending->next != NULL)
		{
			ending = ending->next;
		}
		ending->next = NewNode;
	}
	return (NewNode);
}
