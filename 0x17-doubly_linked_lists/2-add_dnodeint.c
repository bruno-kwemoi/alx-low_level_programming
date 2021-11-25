#include <stdlib.h>
#include "lists.h"
/**
 * add_dnodeint - adds a new node at the beginning
 * @head: pointer to the current head
 * @n: new element
 * Return: address of the new element
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
  struct dlistint_s *temp;
  temp = (struct dlistint_s*)malloc(sizeof(struct dlistint_s));
  temp->n = n;
  temp->prev = NULL;
  temp->next = *head;
  *head = temp;
  if (*head != NULL)
    {
      return(*head);
    }
  else
    {
      return(NULL);
    }
}
