#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node at a given
 * @head: double pointer to the head of the listint
 *  @index: the index of the node that should
 *  Return: 1 if it succeeded,
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *current_node = *head, *temp;

	if (!current_node)
		return (-1);
	if (index == 0)
	{
		*head = current_node->next;
		free(current_node);
		return (1);
	}
	while (current_node->next && ((i + 1) != index))
	{
		current_node = current_node->next;
		i++;
	}
	if ((i + 1) == index && current_node->next)
	{
		temp = current_node->next;
		current_node->next = temp->next;
		free(temp);
		return (1);
	}
	return (-1);
}
