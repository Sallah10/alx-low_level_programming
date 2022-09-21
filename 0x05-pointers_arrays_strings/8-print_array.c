#include <stdio.h>
#include "main.h"

/**
 * print_array - lorem ipsum
 * @a: given input a
 * @n: given input n
 *
 * Return: 0
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);

		if (i == n - 1)
		{
			continue;
		}
		printf(", ");
	}
	printf("\n");
}
