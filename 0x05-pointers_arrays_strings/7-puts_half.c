#include <string.h>
#include "main.h"

void puts_half(char *str)
{
	char n;
	int length, mid, i;
	length = strlen(str);
	mid = length/2;
	i =mid;
	if (length % 2 == 0)
	{
	while (i < length)
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
	}
	else
	{
		n = (length - 1) / 2;
		_putchar(n);
	 }
}
