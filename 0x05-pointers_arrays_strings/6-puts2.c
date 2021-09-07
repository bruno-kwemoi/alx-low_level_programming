#include "main.h"
/**
 *put2 - prints even characters
 *@str: pointer
 *RETURN: Always 0.
 */

void puts2(char *str)
{
int i = 0;
while (str[i])
{
if (str[i]%2==0)
{
_putchar(str[i]);
_putchar('\n');
}
i++;
}
}
