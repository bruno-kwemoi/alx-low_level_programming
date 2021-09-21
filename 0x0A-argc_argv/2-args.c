#include <stdio.h>
/**
 *main - prints arguments
 *@argc: holds number of arguments
 *@argv: holds array of arguments
 *Return: always 0.
 */

int main(int argc, char *argv[])
{
	int count;

	for (count = 0; count < argc; count++)
	{
		printf("%s\n", argv[count]);
	}
	return (0);
}
