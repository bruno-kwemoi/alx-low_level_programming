#include <stdio.h>
#include "lists.h"
/**
 * print_dlistint - prints double linked list
 * @h: pointer to the head of the list
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
  const struct dlistint_s *temp = h;
  int i = 0;

  while (temp != NULL)
    {
      printf("%d\n", temp->n);
      i++;
      temp = temp->next;
    }
  return (i);
}
