#include "main.h"
/**
 *_puts_recursion -print a string
 *@s: pointer to the string
 *
 */

void _puts_recursion(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i++;
	}
	_putchar('\n');
}
