#include "main.h"

/**
 * print_alphabet_x10 - Prints ten times the alphabet in lowercase
 * followed by a new line
 *
 */
void print_alphabet_x10(void)
{
	int p;

	int c;

	for (p = 1; p <= 10; p++)
	{
		for (c = 97; c <= 122; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
