/**
 *reverse_array - reverses an array
 *@a: pointer to an array
 *@n: size of the array
 *Return: Zero.
 */

void reverse_array(int *a, int n)
{
	int i = 0;
	int temp;

	while (i < n)
	{
		temp = a[i];
		a[i] = a[n - 1];
		a[n - 1] = temp;
		i++;
		n--;
	}
}
