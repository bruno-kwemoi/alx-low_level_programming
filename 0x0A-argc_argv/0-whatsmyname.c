#include <stdio.h>
/**
 *main - prints the program name
 *@argc: doesnot take any value
 *@argv: returns program name
 *Return: always 0.
 */

int main(int argc, char *argv[])
{
	(void)argc;
	printf("%s\n", argv[0]);
	return (0);
}
