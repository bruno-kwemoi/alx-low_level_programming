#include "lists.h"
#include <stdio.h>
/**
 *print_list -prints all elements of a list
 *@h: head pointer of the list
 *Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	const list_t *temp = h;
	size_t count = 0;

	while (temp != NULL)
	{
		if (temp->str != NULL)
		{
			printf("[%d] %s\n", temp->len, temp->str);
		}
		else
		{
			printf("[0] (nil)\n");
		}
		count += 1;
		temp = temp->next;
	}
	return (count);
}
