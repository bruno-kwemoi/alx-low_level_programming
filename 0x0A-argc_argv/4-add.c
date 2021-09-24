#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 *main -  add numbers
 *@argc: number of commands
 *@argv: commadline values
 *Return: 0 for success
 */

int main(int argc, char *argv[])
{
	int sum, i, j, length;
	char *ptr;

	if (argc == 1)
		printf("0\n");
	else
	{
		sum = 0;
	for (i = 1; i < argc; i++)
	{
		ptr = argv[i];
		length = strlen(ptr);

		for (j = 0; j < length; j++)
		{
			if (isdigit(*(ptr + j)) == 0)
			{
			printf("Error\n");
			return (1);
			}
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	}
	return (0);
}
