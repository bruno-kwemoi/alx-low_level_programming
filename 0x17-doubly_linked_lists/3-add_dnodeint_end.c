#include "lists.h"
#include <stdlib.h>
/**
 *
 *
 *
 *
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
struct dlistint_s *temp, *trav;
temp = (struct dlistint_s *)malloc(sizeof(struct dlistint_s));

if (temp == NULL)
{
return (NULL);
}
temp->prev = NULL;
temp->next = NULL;
temp->n = n;
temp->next = NULL;
trav = *head;

if (*head == NULL)
{
*head = temp;
}
else
{
while (trav->next != NULL)
trav = trav->next;
temp->prev = trav;
trav->next = temp;
}
return(*head);
}
