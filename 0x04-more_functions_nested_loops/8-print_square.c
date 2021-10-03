#include "main.h"
/**
 *print_square - prints a square
 *@size: the size of the square
 *Return: it's void.
 */

void print_square(int size)
{
	int i, n;

	for (n = 0; n < size; n++)
	{
		for (i = 0; i < size; i++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	if (size <= 0)
	{
		_putchar('\n');
	}
}
