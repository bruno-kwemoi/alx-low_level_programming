#include <string.h>
#include <stdio.h>
/**
 *_strcpy - copies string
 *@dest: pointer to destination
 *@src: pointer to source
 *
 *Return: always 0
 **/

char *_strcpy(char *dest, char *src)
{
	strcpy(dest, src);
	return (src);

}
