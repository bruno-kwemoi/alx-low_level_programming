#include "holberton.h"
#include <stdlib.h>
/**
 *create_array -creates an array
 *@size: size of the array
 *@c:character to be assigned to array
 *Return: the array on success
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	if (size == 0)
		return (NULL);

	str = malloc(sizeof(char) * size);

	if (str == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		str[i] = c;

	return (str);
}
