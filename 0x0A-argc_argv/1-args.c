#include <stdio.h>
/**
 *main - prints the number of arguments
 *@argc: holds the number of arguments
 *@argv: it's null
 *Return: always 0.
 */

int main(int argc, char *argv[])
{
	int i;

	if (argc == 1)
		printf("%d\n", argc - 1);
	else
	{
		for (i = 0; *argv; i++, argv++)
			;

		printf("%d\n", i - 1);
	}

	return (0);
}
