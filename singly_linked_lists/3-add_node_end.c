#include <stddef.h>
#include <stdio.h>
#include <string.h>

#include "lists.h"

/**
*_strlen - calculate the length of a string.
*@str : The string whose length is to be calculated.
*
*Return : The length of the string.
*/

 int _strlen(const char *str)
{
	int length = 0;

	if (str == NULL)
		return (0);

	while (str[length] != '\0')
		length++;

	return (length);
}

/**
 * _strdup - Duplicates a string (manual implementation of strdup).
 * @str: The string to duplicate.
 *
 * Return: A pointer to the newly allocated string, or NULL if it fails.
 */

char *_strdup(const char *str)
{
	int i;
	char *dup;
	int length = _strlen(str);

	dup = malloc(sizeof(char) * (length + 1));
	if (dup == NULL)
		return (NULL);

	for (i = 0; i < length; i++)
		dup[i] = str[i];
	dup[length] = '\0'; // Ajouter le caractère nul à la fin

	return (dup);
}

/**
 * add_node_end - Adds a new node at the end of a list_t list.
 * @head: Pointer to the head of the list_t list.
 * @str: The string to be added to the new node.
 *
 * Return: The address of the new element, or NULL if it failed.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *temp;

	if (str == NULL)
		return (NULL);

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = _strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->len = _strlen(str);
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		temp = *head;
		while (temp->next != NULL)
			temp = temp->next;

		temp->next = new_node;
	}

	return (new_node);
}
