#include "lists.h"
/**
 * list_len - returns the number of elements in a linked list
 * @h : pointer to the first node of the linked list
 * Return : the number of elements in a linked list
 */
size_t list_len(const list_t *h)
{

	const list_t* temp = h;
	int count = 0;

	while (temp != NULL)
	{
		temp = temp->next;
		count++;
	}
	return (count);
}
