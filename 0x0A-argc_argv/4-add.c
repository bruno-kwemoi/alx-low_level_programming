#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 *main -  add numbers
 *@argc: number of commands
 *@argv: commadline values
 *Return: 1 for an error
 *Return: 0 for success
 */

int main(int argc, char *argv[])
{
	int sum, i, j;
	char *ptr;

	if (argc == 1)
		printf("0\n");
	else
	{
		sum = 0;
	for (i = 1; i < argc; i++)
	{
		ptr = argv[i];

		for (j = 1; j < argc; j++)
		{
			if (isdigit(*(ptr + j)) == 0)
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	}
	return (0);
}
