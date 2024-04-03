#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node - Add a new node at the beginning of list_t
 * @head: Head
 * @str: String
 * Return: list_t
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	if (head == NULL || str == NULL)
		return (NULL);

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->len = _strlen(new_node->str);
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}

/**
 * _strlen - Return length of a string
 * @s: (int) text
 * Return: (int) length
 */
int _strlen(char *s)
{
	int i;
	int length = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		length++;
	}
	return (length);
}
