#include <stddef.h>
#include <stdio.h>
#include <string.h>

#include "lists.h"

/**
 * add_node - Adds a new node at the beginning of a list_t list.
 * @head: Pointer to the head
 * @str: The string to be added to the new node.
 *
 * Return: The address of the new element, or NULL if it failed.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode;
	int StrLenght = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	newNode = malloc(sizeof(list_t));

	if (newNode == NULL)
	{
		return (NULL);
	}

	newNode->str = strdup(str);

	if (newNode->str == NULL)
	{
		free(newNode);
		return (NULL);
	}
	for (StrLenght = 0; str[StrLenght] != '\0'; StrLenght++)
	{
	}
	newNode->len = StrLenght;
	newNode->next = *head;
	*head = newNode;

	return (newNode);
}
