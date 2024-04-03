#include "lists.h"

/**
 * list_len - Trouvé le nombre d’éléments dans linkeed list_t list
 * @h: The linked list_t list.
 *
 * Return: The number of elements in h
 */
size_t list_len(const list_t *h)
{
	size_t elements = 0;

	while (h != NULL)
	{
		elements++;
		h = h->next;
	}

	return (elements);
}
