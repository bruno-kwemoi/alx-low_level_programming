#include "lists.h"
#include <stdlib.h>
/**
 * free_dlistint - free a doubly linked list
 * @head: pointer to the first node of the list
 * Return: nothing
 */
void free_dlistint(dlistint_t *head)
{
struct dlistint_s *temp = head;
struct dlistint_s *next;

while (temp != NULL)
{
next = temp->next;
free(temp);
temp = next;
}
head = NULL;
}
