#include "main.h"
/**
 *main-Entry point
 *Description: prints Holberton
 *
 *Return: Always 0.
 */
int main(void)
{
	char name[] = "Holberton\n";
	int i = 0;
	
	while (name[i] != '\0')
	{
		char c = name[i];

		_putchar(c);
		i++;
	}
	return (0);
}
