#include <stdio.h>
/**
 *main - prints the number of arguments
 *@argc: holds the number of arguments
 *@argv: it's null
 *Return: always 0.
 */

int main(int argc, char *argv[])
{
	(void)*argv;
	printf("%d\n", argc);
	return (0);
}
