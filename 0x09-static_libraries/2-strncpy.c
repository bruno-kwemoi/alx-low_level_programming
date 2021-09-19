#include <string.h>
/**
 * _strncpy - copies string
 *@dest: pointer to destination string
 *@src: pointer to source string
 *@n: number of bytes to copy
 *Return: pointer to the resulting string
 */

char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}
