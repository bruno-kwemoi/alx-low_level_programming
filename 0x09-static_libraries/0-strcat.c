#include <string.h>
/**
 * *_strcat - concatenates two strings
 *@dest: pointer to a string
 *@src: pointer to a string
 *Return: pointer to the resuliting string
 **/

char *_strcat(char *dest, char *src)
{
	strcat(dest, src);
	return (dest);
}
