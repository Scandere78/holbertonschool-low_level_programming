#include "lists.h"
/**
 * free_list - function that frees a list_t list.
 *
 * @head: parameter that point to the head of the
 * linked list
 */
void free_list(list_t *head)
{
	list_t *noeud = head;
	list_t *next;

	while (noeud = != NULL)
	{
		next = noeud->next;
		free(noeud->str);
		free(noeud);
		noeud = next;
	}
}
