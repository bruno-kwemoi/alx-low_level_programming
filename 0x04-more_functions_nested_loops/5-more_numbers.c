#include "main.h"
#include <stdio.h>

/**
 *more_numbers - print 10 times the numbers 0 to 14
 *
 *Return: always 0.
 */

void more_numbers(void)
{
	int i,n;

	for (n = 0; n <= 10; n++)
	{
		for(i = 0; i < 14; i++)
		{
			printf("%d", i);
		}
		printf("\n");
		printf("%d", i);
       	}
}
