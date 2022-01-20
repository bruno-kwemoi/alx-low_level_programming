#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_node - adds a new node to the beggining of a singly linked list
 * @head: pointer to the first node of the singly linked list
 * @str: pointer to the string to be added to the linked list
 * Return: pointer to the first node
 */
list_t *add_node(list_t **head, const char *str)
{
	struct list_s *new_node = (struct list_s *) malloc(sizeof(struct list_s));

	new_node->str = strdup(str);
	new_node->next = *head;
	*head = new_node;

	return (*head);
}
