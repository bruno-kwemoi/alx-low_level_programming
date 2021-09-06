#include "main.h"
#include <stdio.h>

/**
 *print_numbers - prints numbers
 *
 *Return: Always 0.
 */
void print_numbers(void)
{
int i = 0;
while (i <= 9)
{
putchar(i + '0');
i++;
}
putchar('\n');
}
