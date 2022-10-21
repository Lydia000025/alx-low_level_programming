#include <stdlib.h>
#include "lists.h"

/**
 * list_len - print 
 * @h: pointr
 * Return:0
 */
size_t list_len(const list_t *h)
{
	size_t num_of_nodes = 0;

	while (h)
	{
		h = h->next;
		num_of_nodes++;
	}
	return (num_of_nodes);
}
