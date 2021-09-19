#include "main.h"
#include <ctype.h>


/**
 *  _isdigit - checks for a digit
 * @c: its mine damnit
 * Return:1 if c is a digit
 */
int _isdigit(int c)
{
if (c >= '0' && c <= '9')
{
return (1);
}

return (0);
}
