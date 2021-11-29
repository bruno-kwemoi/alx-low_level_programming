#include "lists.h"
#include <stdlib.h>
/**
 *
 *
 *
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
