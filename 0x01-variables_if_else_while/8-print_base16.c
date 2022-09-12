#include <stdio.h>

/**
 * main - Prints all numbers and letters (lowercase) of base 16
 *
 * Return: 0
 */
int main(void)
{
	int a;

	int b;

	a = 48;
	b = 97;
	while (a <= 57)
	{
		putchar(a);
		a++;
	}
	while (b <= 102)
	{
		putchar(b);
		b++;
	}
	putchar('\n');
	return (0);
}
