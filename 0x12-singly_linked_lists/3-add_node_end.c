#include <string.h>
#include <stdio.h>
#include "lists.h"
#include "strlen.c"

list_t *createNewNode(const char *str);
/**
 * add_node_end - dds a new node at the end of a list_t list
 * @head: douple pointer to the head of the linked list
 * @str: pointer to string to be assigned to the added node's str property
 * Retrun: 0
 */
list_t *add_node_end(list_t **head, const char *str)
{

