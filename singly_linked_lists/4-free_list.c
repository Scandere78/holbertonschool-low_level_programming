#include "lists.h"
#include <stdlib.h>

/**
 * free_list - Frees a list_t
 * @head: Pointer list_t
 */
void free_list(list_t *head)
{
	list_t *node = head;
	list_t *next;

	while (node != NULL)
	{
		next = node->next;
		free(node->str);
		free(node);
		node = next;
	}
}
