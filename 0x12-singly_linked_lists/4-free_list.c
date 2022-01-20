#include <stdlib.h>
#include "lists.h"
/**
 * free_list - frees a list_t list
 * @head : pointer to the first node of the list
 */
void free_list(list_t *head)
{
	struct list_s *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
