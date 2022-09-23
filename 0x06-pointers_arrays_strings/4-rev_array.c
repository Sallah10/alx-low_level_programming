#include "main.h"

/**
 * reverse_array - reverses an array
 * @a: lorem ipsum
 * @n: lorem ipsum
 *
 * Return: 0
 */
void reverse_array(int *a, int n)
{
	int tmp;

	int i;

	for (i = n - 1; i >= n / 2; i--)
	{
		tmp = a[n - 1 - i];
		a[n - 1 - i] = a[i];
		a[i] = tmp;
	}
}
