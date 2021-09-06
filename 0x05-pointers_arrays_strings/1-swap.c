/**
 * swap_int - swaps numbers
 *@a - pointer
 *@b - pointer
 *@c - integer
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
int c;
c = *a;
*a = *b;
*b = c;
}
