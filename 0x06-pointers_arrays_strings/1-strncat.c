#include <string.h>
/*
 *_strncat - concatenates two strings
 *@dest: pointer to a string
 *@src: pointer to a string
 *@n:
 *Return: Always 0.
 **/

char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}
