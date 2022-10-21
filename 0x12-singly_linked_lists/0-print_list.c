#include "lists.h"
#include <stdio.h>
#include <math.h>
/**
 * print_list - function
 * @h: linked list
 * Return:0
 */
size_t print_list(const list_t *h)
{
	size_t num_of_nodes = 0;
	while (h)
	{
			if (h->str == NULL)
				printf("[0] (nil)\n");
			else
				printf("[%u] %s\n", h->len, h->str);
			h = h->next;
			num_of_nodes++;
	}
	return (num_of_nodes);
}
