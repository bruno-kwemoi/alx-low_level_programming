#include <stddef.h>
#include "lists.h"
/**
 * dlistint_len - finds number of elements
 * @h: pointer to head
 * Return: number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
const struct dlistint_s *temp = h;
int i = 0;
while (temp != NULL)
{
i++;
temp = temp->next;
}
return (i);
}
