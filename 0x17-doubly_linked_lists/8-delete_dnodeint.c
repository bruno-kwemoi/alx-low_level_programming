#include "lists.h"
#include <stdlib.h>
/**
 *
 *
 *
 *
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
  unsigned int i = 1;
  struct dlistint_s *temp, *position;
  temp = *head;

  if (index == 1)
    {
      position = *head;
      *head = (*head)->next;
      if (*head != NULL)
	{
	  (*head)->prev = NULL;
	}
      free(position);
      return(1);
    }
  while (i < index - 1)
    {
      temp = temp->next;
      i++;
    }
  position = temp->next;
  if (position->next != NULL)
    position->next->prev = temp;
  temp->next = position->next;
  free(position);
  return(10);
}
