#include "lists.h"
#include <stdlib.h>
/**
 *
 *
 *
 *
 *
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
  struct dlistint_s *temp, *newnode;
  unsigned int i = 1;
  newnode = malloc(sizeof(struct dlistint_s));
  newnode->next = NULL;
  newnode->prev = NULL;
  newnode->n = n;
  temp = *h;

  if (*h == NULL)
    {
      *h = newnode;
      newnode->prev = NULL;
      newnode->next = NULL;
    }
  else if (idx == 1)
    {
      newnode->next = *h;
      newnode->next->prev = newnode;
      newnode->prev = NULL;
      *h = newnode;
    }
  else
    {
      while (i < idx - 1)
	{
	  temp = temp->next;
	  i++;
	}
      newnode->next = temp->next;
      newnode->prev = temp;
      temp -> next = newnode;
      temp->next->prev = newnode;
    }
  return(*h);
}
