#include "stdio.h"
/**
 *print_array - prints an array
 *@a: pointer to an array
 *@n: number of elements
 *Return: Always zero
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d, ", a[i]);
	}
	printf("\n");
}
